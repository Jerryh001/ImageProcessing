#include "stdafx.h"
#include "ColorTransformation.h"


ColorTransformation::ColorTransformation()
{
}
Object^ ColorTransformation::Clone()
{
	return gcnew ColorTransformation();
}
Void ColorTransformation::Run()
{
	result = gcnew Bitmap(image);
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			Color% pixel = image->GetPixel(i, j);
			float bright = pixel.GetBrightness() * 255;
			result->SetPixel(i, j, Color::FromArgb(bright, bright, bright));
		}
	}
}
Bitmap^ ColorTransformation::GetResult()
{
	return result;
}
List<Bitmap^>^ ColorTransformation::GetResults()
{
	return gcnew List<Bitmap^>(gcnew array<Bitmap^>{result});
}