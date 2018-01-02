#include "stdafx.h"
#include "Thresholding.h"


Thresholding::Thresholding()
{
	threshold = 128;
}
Object^ Thresholding::Clone()
{
	return gcnew Thresholding();
}
Void Thresholding::Run()
{
	Bitmap^ answer = gcnew Bitmap(image);
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			if (image->GetPixel(i, j).GetBrightness()*255>=threshold)
			{
				answer->SetPixel(i, j, Color::White);
			}
			else
			{
				answer->SetPixel(i, j, Color::Black);
			}
		}
	}
	results->Add(gcnew Picture(answer));
}