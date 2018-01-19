using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Emgu.CV;
using Emgu.CV.CvEnum;
using Emgu.CV.Structure;
using Emgu.CV.Util;

namespace ImageProcessing_HW2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        private void button_loadimage_Click(object sender, EventArgs e)
        {
            if(openFile.ShowDialog()==DialogResult.OK)
            {
                imageBox_origin.Image = new Image<Bgr, byte>(openFile.FileName);
                if(autoload.Checked)
                {
                    try
                    {
                        imageBox_gt.Image = new Image<Gray, byte>(openFile.FileName.Replace("\\Data\\", "\\GT\\"));
                    }
                    catch
                    {

                    }
                }
                Run();
            }
        }

        private void button_loadgt_Click(object sender, EventArgs e)
        {
            if (openFile.ShowDialog() == DialogResult.OK)
            {
                imageBox_gt.Image = new Image<Gray, byte>(openFile.FileName);
                if(imageBox_origin.Image!=null)
                {
                    overlapDraw();
                }
            }
        }
        private void Run()
        {
            
            Image<Bgr, byte> origin_bgr = (Image<Bgr, byte>)imageBox_origin.Image;

            Image<Gray, byte>[] split_bgr = origin_bgr.Split();
            Image<Gray, byte> green = origin_bgr[1];
            Image<Gray, byte> blue = origin_bgr[0];

            green._EqualizeHist();
            blue._EqualizeHist();

            Image<Hsv, byte> origin_hsv = origin_bgr.Convert<Hsv, byte>();

            Image<Gray, byte> saturation = origin_hsv.Split()[1];

            saturation._EqualizeHist();

            int step = 5;

            Image<Gray, byte> sred = saturation.Max(saturation.Not());
            sred._EqualizeHist();

            Image<Gray, byte> t1 = sred.ThresholdBinary(new Gray(192), new Gray(255)).Dilate(step).Erode(step).Erode(step).Dilate(step);
            Image<Gray, byte> t2 = blue.Or(green).Not();
            t2._EqualizeHist();
            Image<Gray, byte> t3 = t2.ThresholdBinary(new Gray(192), new Gray(255)).Dilate(step).Erode(step).Erode(step).Dilate(step);

            Image<Gray, byte> result = t1.And(t3).Dilate(step).Erode(step).Erode(step).Dilate(step);

            using (VectorOfVectorOfPoint contours = FindContours(result))
            {
                Tuple<int, double> max = FindMaxArea(contours,result.Size);
                imageBox_result.Image = new Image<Gray,byte>(result.Size).Not();
                CvInvoke.DrawContours(imageBox_result.Image, contours, max.Item1, new MCvScalar(0, 0, 0), -1);
            }
            overlapDraw();
        }
        private VectorOfVectorOfPoint FindContours(IInputOutputArray image)
        {
            VectorOfVectorOfPoint contours = new VectorOfVectorOfPoint();
            CvInvoke.FindContours(image, contours, null, RetrType.External, ChainApproxMethod.ChainApproxSimple);
            return contours;
        }
        private Tuple<int, double> FindMaxArea(VectorOfVectorOfPoint contours,Size size)
        {
            if (contours.Size == 0) return new Tuple<int, double>(-1, 0);
            Tuple<int, double> max = new Tuple<int, double>(-1, 0);
            for (int i = 0; i < contours.Size; i++)
            {
                double s = CvInvoke.ContourArea(contours[i]);
                if (max.Item1<0||s > max.Item2)
                {
                    max = new Tuple<int, double>(i, s);
                }
            }
            return max;
        }
        private void overlapDraw()
        {
            imageBox_overlap.Image = (Image<Bgr, byte>)imageBox_origin.Image.Clone();
            if(imageBox_result.Image!=null)
            {
                using (VectorOfVectorOfPoint contours = FindContours(((Image<Gray, byte>)imageBox_result.Image).Not()))
                {
                    Tuple<int, double> max = FindMaxArea(contours, imageBox_result.Image.Size);
                    label_result.Text = "0";
                    if (max.Item1>=0)
                    {
                        label_result.Text = max.Item2.ToString("0.##");
                        CvInvoke.DrawContours(imageBox_overlap.Image, contours, max.Item1, new MCvScalar(0, 0, 255), 3);
                    }
                }
            }
            if (imageBox_gt.Image != null)
            {
                using (VectorOfVectorOfPoint contours = FindContours(((Image<Gray, byte>)imageBox_gt.Image).Not()))
                {
                    Tuple<int, double> max = FindMaxArea(contours, imageBox_gt.Image.Size);
                    label_gt.Text = "0";
                    if (max.Item1 >= 0)
                    {
                        label_gt.Text = max.Item2.ToString("0.##");
                        CvInvoke.DrawContours(imageBox_overlap.Image, contours, max.Item1, new MCvScalar(0, 255, 0), 3);
                    }
                }
            }
            imageBox_overlap.Refresh();
            if(label_result.Text != "0"&& label_gt.Text != "0")
            {
                Image<Gray, byte> imageand = ((Image<Gray, byte>)imageBox_result.Image).Or((Image<Gray, byte>)imageBox_gt.Image);
                using (VectorOfVectorOfPoint contours = FindContours(imageand.Not()))
                {
                    Tuple<int, double> max = FindMaxArea(contours, imageand.Size);
                    label_intersect.Text = "0";
                    if (max.Item1 >= 0)
                    {
                        label_intersect.Text = max.Item2.ToString("0.##");
                        label_dc.Text = (2 * Convert.ToDouble(label_intersect.Text) / (Convert.ToDouble(label_result.Text) + Convert.ToDouble(label_gt.Text))).ToString("0.00");
                    }
                }
            }
        }
    }
}
