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
	result = gcnew List<Bitmap^>(3);
	for (int i = 0; i < 3;i++)
	{
		result->Add(gcnew Bitmap(image));
	}
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			Color% pixel = image->GetPixel(i, j);
			result[0]->SetPixel(i, j, Color::FromArgb(pixel.R, pixel.R, pixel.R));
			result[1]->SetPixel(i, j, Color::FromArgb(pixel.G, pixel.G, pixel.G));
			result[2]->SetPixel(i, j, Color::FromArgb(pixel.B, pixel.B, pixel.B));
		}
	}
}
Bitmap^ ColorExtraction::GetResult()
{
	return result[(int)result_index];
}
List<Bitmap^>^ ColorExtraction::GetResults()
{
	return result;
}