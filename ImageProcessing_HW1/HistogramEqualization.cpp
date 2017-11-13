#include "stdafx.h"
#include "HistogramEqualization.h"


HistogramEqualization::HistogramEqualization()
{
}
Dictionary<int, int>^ HistogramEqualization::GetBrightnessSum(Bitmap^% image)
{
	Dictionary<int, int>^ sum = gcnew Dictionary<int, int>();
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			int bright = image->GetPixel(i, j).R;
			if (sum->ContainsKey(bright))
			{
				sum[bright]++;
			}
			else
			{
				sum->Add(bright, 1);
			}
		}
	}
	return sum;
}
void HistogramEqualization::BindBitmapChart(Bitmap^% image, Chart^% chart)
{
	Dictionary<int, int>^ d = GetBrightnessSum(image);
	
	chart->Series["Series1"]->Points->DataBindXY(d->Keys, d->Values);
}
Object^ HistogramEqualization::Clone()
{
	return gcnew HistogramEqualization();
}
Void HistogramEqualization::Run()
{
	ColorTransformation t;
	t.SetImage(image);
	Bitmap^ input = t.GetResult();
	result = gcnew Bitmap(input);
	Dictionary<int, int>^ p = GetBrightnessSum(input);
	Dictionary<int, int>^ sum = gcnew Dictionary<int, int>();
	int sumpoint = 0;
	int brightmin = 255;
	int brightmax = 0;
	for (int i = 0; i < 256;i++)
	{
		if (p->ContainsKey(i))
		{
			sum->Add(i, p[i] + sumpoint);
			if (i < brightmin) brightmin = i;
			if (i > brightmax) brightmax = i;
			sumpoint += p[i];
		}
	}
	for (int i = 0; i < input->Width; i++)
	{
		for (int j = 0; j < input->Height; j++)
		{
			
			int red = input->GetPixel(i, j).R;
			int bright = Math::Round(((float)sum[red] - sum[brightmin]) / (sumpoint - sum[brightmin]) * 255);
			result->SetPixel(i, j, Color::FromArgb(bright, bright, bright));
		}
	}
}
Bitmap^ HistogramEqualization::GetResult()
{
	return result;
}
List<Bitmap^>^ HistogramEqualization::GetResults()
{
	return gcnew List<Bitmap^>(gcnew array<Bitmap^>{result});
}