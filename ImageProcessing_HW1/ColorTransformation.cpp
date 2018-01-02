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
	Bitmap^ answer = gcnew Bitmap(image);
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			Color% pixel = image->GetPixel(i, j);
			float bright = pixel.GetBrightness() * 255;
			answer->SetPixel(i, j, Color::FromArgb(bright, bright, bright));
		}
	}
	results->Add(gcnew Picture(answer));
}