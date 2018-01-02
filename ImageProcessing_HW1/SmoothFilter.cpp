#include "stdafx.h"
#include "SmoothFilter.h"


SmoothFilter::SmoothFilter()
{
	type = SmoothType::Median;
}
Object^ SmoothFilter::Clone()
{
	return gcnew SmoothFilter();
}
Void SmoothFilter::Run()
{
	ColorTransformation t;
	t.SetImage(image);
	Bitmap^ input = t.GetResult();
	Bitmap^ answer = gcnew Bitmap(image);
	for (int i = 0; i < input->Width; i++)
	{
		for (int j = 0; j < input->Height; j++)
		{
			List<int>^ pixels = gcnew List<int>();
			for (int u = i - 1; u <= i + 1; u++)
			{
				for (int v = j - 1; v <= j + 1; v++)
				{
					if (u < 0 || u >= input->Width || v < 0 || v >= input->Height)
					{
						continue;
					}
					pixels->Add(input->GetPixel(u, v).R);
				}
			}
			int ans = 0;
			if (type == SmoothType::Mean)
			{
				for each(int% p in pixels)
				{
					ans += p;
				}
				ans /= pixels->Count;
			}
			else//Median
			{
				pixels->Sort();
				if (pixels->Count / 2)
				{
					ans = pixels[pixels->Count / 2];
				}
				else
				{
					ans = (pixels[pixels->Count / 2] + pixels[pixels->Count / 2 - 1]) / 2;
				}
			}
			answer->SetPixel(i, j, Color::FromArgb(ans, ans, ans));
		}
	}
	results->Add(gcnew Picture(answer));
}