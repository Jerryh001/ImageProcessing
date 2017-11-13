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
	result = gcnew Bitmap(image);
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			if (image->GetPixel(i, j).GetBrightness()*255>=threshold)
			{
				result->SetPixel(i, j, Color::White);
			}
			else
			{
				result->SetPixel(i, j, Color::Black);
			}
		}
	}
}
Bitmap^ Thresholding::GetResult()
{
	return result;
}
List<Bitmap^>^ Thresholding::GetResults()
{
	return gcnew List<Bitmap^>(gcnew array<Bitmap^>{result});
}