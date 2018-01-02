#include "stdafx.h"
#include "ColorExtraction.h"


ColorExtraction::ColorExtraction()
{
}
Object^ ColorExtraction::Clone()
{
	return gcnew ColorExtraction();
}
Void ColorExtraction::Run()
{
	List<Bitmap^>^ answers = gcnew List<Bitmap^>(3);
	for (int i = 0; i < 3;i++)
	{
		answers->Add(gcnew Bitmap(image));
	}
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			Color% pixel = image->GetPixel(i, j);
			answers[0]->SetPixel(i, j, Color::FromArgb(pixel.R, pixel.R, pixel.R));
			answers[1]->SetPixel(i, j, Color::FromArgb(pixel.G, pixel.G, pixel.G));
			answers[2]->SetPixel(i, j, Color::FromArgb(pixel.B, pixel.B, pixel.B));
		}
	}
	for each(Bitmap^ b in answers)
	{
		results->Add(gcnew Picture(b));
	}
}
Bitmap^ ColorExtraction::GetResult()
{
	return results[(int)result_index]->GetImage();
}