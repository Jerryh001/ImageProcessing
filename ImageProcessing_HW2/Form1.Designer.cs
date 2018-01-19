namespace ImageProcessing_HW2
{
    partial class Form1
    {
        /// <summary>
        /// 設計工具所需的變數。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清除任何使用中的資源。
        /// </summary>
        /// <param name="disposing">如果應該處置 Managed 資源則為 true，否則為 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 設計工具產生的程式碼

        /// <summary>
        /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
        /// 這個方法的內容。
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.Windows.Forms.SplitContainer splitContainer1;
            System.Windows.Forms.GroupBox groupBox8;
            System.Windows.Forms.GroupBox groupBox7;
            System.Windows.Forms.GroupBox groupBox6;
            System.Windows.Forms.GroupBox groupBox5;
            System.Windows.Forms.TableLayoutPanel tableLayoutPanel1;
            System.Windows.Forms.GroupBox groupBox4;
            System.Windows.Forms.GroupBox groupBox3;
            System.Windows.Forms.GroupBox groupBox2;
            System.Windows.Forms.GroupBox groupBox1;
            this.autoload = new System.Windows.Forms.CheckBox();
            this.label_dc = new System.Windows.Forms.Label();
            this.label_intersect = new System.Windows.Forms.Label();
            this.label_gt = new System.Windows.Forms.Label();
            this.label_result = new System.Windows.Forms.Label();
            this.button_loadgt = new System.Windows.Forms.Button();
            this.button_loadimage = new System.Windows.Forms.Button();
            this.imageBox_gt = new Emgu.CV.UI.ImageBox();
            this.imageBox_overlap = new Emgu.CV.UI.ImageBox();
            this.imageBox_result = new Emgu.CV.UI.ImageBox();
            this.imageBox_origin = new Emgu.CV.UI.ImageBox();
            this.openFile = new System.Windows.Forms.OpenFileDialog();
            splitContainer1 = new System.Windows.Forms.SplitContainer();
            groupBox8 = new System.Windows.Forms.GroupBox();
            groupBox7 = new System.Windows.Forms.GroupBox();
            groupBox6 = new System.Windows.Forms.GroupBox();
            groupBox5 = new System.Windows.Forms.GroupBox();
            tableLayoutPanel1 = new System.Windows.Forms.TableLayoutPanel();
            groupBox4 = new System.Windows.Forms.GroupBox();
            groupBox3 = new System.Windows.Forms.GroupBox();
            groupBox2 = new System.Windows.Forms.GroupBox();
            groupBox1 = new System.Windows.Forms.GroupBox();
            ((System.ComponentModel.ISupportInitialize)(splitContainer1)).BeginInit();
            splitContainer1.Panel1.SuspendLayout();
            splitContainer1.Panel2.SuspendLayout();
            splitContainer1.SuspendLayout();
            groupBox8.SuspendLayout();
            groupBox7.SuspendLayout();
            groupBox6.SuspendLayout();
            groupBox5.SuspendLayout();
            tableLayoutPanel1.SuspendLayout();
            groupBox4.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_gt)).BeginInit();
            groupBox3.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_overlap)).BeginInit();
            groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_result)).BeginInit();
            groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_origin)).BeginInit();
            this.SuspendLayout();
            // 
            // splitContainer1
            // 
            splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            splitContainer1.Location = new System.Drawing.Point(0, 0);
            splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            splitContainer1.Panel1.Controls.Add(this.autoload);
            splitContainer1.Panel1.Controls.Add(groupBox8);
            splitContainer1.Panel1.Controls.Add(groupBox7);
            splitContainer1.Panel1.Controls.Add(groupBox6);
            splitContainer1.Panel1.Controls.Add(groupBox5);
            splitContainer1.Panel1.Controls.Add(this.button_loadgt);
            splitContainer1.Panel1.Controls.Add(this.button_loadimage);
            // 
            // splitContainer1.Panel2
            // 
            splitContainer1.Panel2.Controls.Add(tableLayoutPanel1);
            splitContainer1.Size = new System.Drawing.Size(1182, 853);
            splitContainer1.SplitterDistance = 160;
            splitContainer1.TabIndex = 0;
            // 
            // autoload
            // 
            this.autoload.AutoSize = true;
            this.autoload.Location = new System.Drawing.Point(12, 328);
            this.autoload.Name = "autoload";
            this.autoload.Size = new System.Drawing.Size(108, 19);
            this.autoload.TabIndex = 8;
            this.autoload.Text = "自動載入GT";
            this.autoload.UseVisualStyleBackColor = true;
            // 
            // groupBox8
            // 
            groupBox8.AutoSize = true;
            groupBox8.Controls.Add(this.label_dc);
            groupBox8.Location = new System.Drawing.Point(12, 272);
            groupBox8.Name = "groupBox8";
            groupBox8.Size = new System.Drawing.Size(140, 50);
            groupBox8.TabIndex = 7;
            groupBox8.TabStop = false;
            groupBox8.Text = "D.C.";
            // 
            // label_dc
            // 
            this.label_dc.AutoSize = true;
            this.label_dc.Dock = System.Windows.Forms.DockStyle.Top;
            this.label_dc.Location = new System.Drawing.Point(3, 21);
            this.label_dc.Name = "label_dc";
            this.label_dc.Size = new System.Drawing.Size(14, 15);
            this.label_dc.TabIndex = 0;
            this.label_dc.Text = "0";
            // 
            // groupBox7
            // 
            groupBox7.AutoSize = true;
            groupBox7.Controls.Add(this.label_intersect);
            groupBox7.Location = new System.Drawing.Point(12, 216);
            groupBox7.Name = "groupBox7";
            groupBox7.Size = new System.Drawing.Size(140, 50);
            groupBox7.TabIndex = 6;
            groupBox7.TabStop = false;
            groupBox7.Text = "Intersect";
            // 
            // label_intersect
            // 
            this.label_intersect.AutoSize = true;
            this.label_intersect.Dock = System.Windows.Forms.DockStyle.Top;
            this.label_intersect.Location = new System.Drawing.Point(3, 21);
            this.label_intersect.Name = "label_intersect";
            this.label_intersect.Size = new System.Drawing.Size(14, 15);
            this.label_intersect.TabIndex = 0;
            this.label_intersect.Text = "0";
            // 
            // groupBox6
            // 
            groupBox6.AutoSize = true;
            groupBox6.Controls.Add(this.label_gt);
            groupBox6.Location = new System.Drawing.Point(12, 160);
            groupBox6.Name = "groupBox6";
            groupBox6.Size = new System.Drawing.Size(140, 50);
            groupBox6.TabIndex = 5;
            groupBox6.TabStop = false;
            groupBox6.Text = "G.T.";
            // 
            // label_gt
            // 
            this.label_gt.AutoSize = true;
            this.label_gt.Dock = System.Windows.Forms.DockStyle.Top;
            this.label_gt.Location = new System.Drawing.Point(3, 21);
            this.label_gt.Name = "label_gt";
            this.label_gt.Size = new System.Drawing.Size(14, 15);
            this.label_gt.TabIndex = 0;
            this.label_gt.Text = "0";
            // 
            // groupBox5
            // 
            groupBox5.AutoSize = true;
            groupBox5.Controls.Add(this.label_result);
            groupBox5.Location = new System.Drawing.Point(12, 104);
            groupBox5.Name = "groupBox5";
            groupBox5.Size = new System.Drawing.Size(140, 50);
            groupBox5.TabIndex = 4;
            groupBox5.TabStop = false;
            groupBox5.Text = "Result";
            // 
            // label_result
            // 
            this.label_result.AutoSize = true;
            this.label_result.Dock = System.Windows.Forms.DockStyle.Top;
            this.label_result.Location = new System.Drawing.Point(3, 21);
            this.label_result.Name = "label_result";
            this.label_result.Size = new System.Drawing.Size(14, 15);
            this.label_result.TabIndex = 0;
            this.label_result.Text = "0";
            // 
            // button_loadgt
            // 
            this.button_loadgt.Location = new System.Drawing.Point(12, 58);
            this.button_loadgt.Name = "button_loadgt";
            this.button_loadgt.Size = new System.Drawing.Size(140, 40);
            this.button_loadgt.TabIndex = 1;
            this.button_loadgt.Text = "載入G.T.";
            this.button_loadgt.UseVisualStyleBackColor = true;
            this.button_loadgt.Click += new System.EventHandler(this.button_loadgt_Click);
            // 
            // button_loadimage
            // 
            this.button_loadimage.Location = new System.Drawing.Point(12, 12);
            this.button_loadimage.Name = "button_loadimage";
            this.button_loadimage.Size = new System.Drawing.Size(140, 40);
            this.button_loadimage.TabIndex = 0;
            this.button_loadimage.Text = "載入圖檔";
            this.button_loadimage.UseVisualStyleBackColor = true;
            this.button_loadimage.Click += new System.EventHandler(this.button_loadimage_Click);
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.ColumnCount = 2;
            tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50F));
            tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50F));
            tableLayoutPanel1.Controls.Add(groupBox4, 1, 1);
            tableLayoutPanel1.Controls.Add(groupBox3, 0, 1);
            tableLayoutPanel1.Controls.Add(groupBox2, 1, 0);
            tableLayoutPanel1.Controls.Add(groupBox1, 0, 0);
            tableLayoutPanel1.Dock = System.Windows.Forms.DockStyle.Fill;
            tableLayoutPanel1.Location = new System.Drawing.Point(0, 0);
            tableLayoutPanel1.Name = "tableLayoutPanel1";
            tableLayoutPanel1.RowCount = 2;
            tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            tableLayoutPanel1.Size = new System.Drawing.Size(1018, 853);
            tableLayoutPanel1.TabIndex = 0;
            // 
            // groupBox4
            // 
            groupBox4.Controls.Add(this.imageBox_gt);
            groupBox4.Dock = System.Windows.Forms.DockStyle.Fill;
            groupBox4.Location = new System.Drawing.Point(512, 429);
            groupBox4.Name = "groupBox4";
            groupBox4.Size = new System.Drawing.Size(503, 421);
            groupBox4.TabIndex = 3;
            groupBox4.TabStop = false;
            groupBox4.Text = "G.T.";
            // 
            // imageBox_gt
            // 
            this.imageBox_gt.Dock = System.Windows.Forms.DockStyle.Fill;
            this.imageBox_gt.Location = new System.Drawing.Point(3, 21);
            this.imageBox_gt.Name = "imageBox_gt";
            this.imageBox_gt.Size = new System.Drawing.Size(497, 397);
            this.imageBox_gt.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.imageBox_gt.TabIndex = 3;
            this.imageBox_gt.TabStop = false;
            // 
            // groupBox3
            // 
            groupBox3.Controls.Add(this.imageBox_overlap);
            groupBox3.Dock = System.Windows.Forms.DockStyle.Fill;
            groupBox3.Location = new System.Drawing.Point(3, 429);
            groupBox3.Name = "groupBox3";
            groupBox3.Size = new System.Drawing.Size(503, 421);
            groupBox3.TabIndex = 2;
            groupBox3.TabStop = false;
            groupBox3.Text = "疊加結果";
            // 
            // imageBox_overlap
            // 
            this.imageBox_overlap.Dock = System.Windows.Forms.DockStyle.Fill;
            this.imageBox_overlap.Location = new System.Drawing.Point(3, 21);
            this.imageBox_overlap.Name = "imageBox_overlap";
            this.imageBox_overlap.Size = new System.Drawing.Size(497, 397);
            this.imageBox_overlap.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.imageBox_overlap.TabIndex = 3;
            this.imageBox_overlap.TabStop = false;
            // 
            // groupBox2
            // 
            groupBox2.Controls.Add(this.imageBox_result);
            groupBox2.Dock = System.Windows.Forms.DockStyle.Fill;
            groupBox2.Location = new System.Drawing.Point(512, 3);
            groupBox2.Name = "groupBox2";
            groupBox2.Size = new System.Drawing.Size(503, 420);
            groupBox2.TabIndex = 1;
            groupBox2.TabStop = false;
            groupBox2.Text = "計算結果";
            // 
            // imageBox_result
            // 
            this.imageBox_result.Dock = System.Windows.Forms.DockStyle.Fill;
            this.imageBox_result.Location = new System.Drawing.Point(3, 21);
            this.imageBox_result.Name = "imageBox_result";
            this.imageBox_result.Size = new System.Drawing.Size(497, 396);
            this.imageBox_result.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.imageBox_result.TabIndex = 3;
            this.imageBox_result.TabStop = false;
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(this.imageBox_origin);
            groupBox1.Dock = System.Windows.Forms.DockStyle.Fill;
            groupBox1.Location = new System.Drawing.Point(3, 3);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new System.Drawing.Size(503, 420);
            groupBox1.TabIndex = 0;
            groupBox1.TabStop = false;
            groupBox1.Text = "原始圖片";
            // 
            // imageBox_origin
            // 
            this.imageBox_origin.Dock = System.Windows.Forms.DockStyle.Fill;
            this.imageBox_origin.Location = new System.Drawing.Point(3, 21);
            this.imageBox_origin.Name = "imageBox_origin";
            this.imageBox_origin.Size = new System.Drawing.Size(497, 396);
            this.imageBox_origin.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.imageBox_origin.TabIndex = 2;
            this.imageBox_origin.TabStop = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1182, 853);
            this.Controls.Add(splitContainer1);
            this.Name = "Form1";
            this.Text = "Form1";
            splitContainer1.Panel1.ResumeLayout(false);
            splitContainer1.Panel1.PerformLayout();
            splitContainer1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(splitContainer1)).EndInit();
            splitContainer1.ResumeLayout(false);
            groupBox8.ResumeLayout(false);
            groupBox8.PerformLayout();
            groupBox7.ResumeLayout(false);
            groupBox7.PerformLayout();
            groupBox6.ResumeLayout(false);
            groupBox6.PerformLayout();
            groupBox5.ResumeLayout(false);
            groupBox5.PerformLayout();
            tableLayoutPanel1.ResumeLayout(false);
            groupBox4.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_gt)).EndInit();
            groupBox3.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_overlap)).EndInit();
            groupBox2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_result)).EndInit();
            groupBox1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.imageBox_origin)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.Button button_loadgt;
        private System.Windows.Forms.Button button_loadimage;
        private Emgu.CV.UI.ImageBox imageBox_gt;
        private Emgu.CV.UI.ImageBox imageBox_overlap;
        private Emgu.CV.UI.ImageBox imageBox_result;
        private Emgu.CV.UI.ImageBox imageBox_origin;
        private System.Windows.Forms.OpenFileDialog openFile;
        private System.Windows.Forms.Label label_result;
        private System.Windows.Forms.Label label_gt;
        private System.Windows.Forms.Label label_intersect;
        private System.Windows.Forms.Label label_dc;
        private System.Windows.Forms.CheckBox autoload;
    }
}

