#include "stdafx.h"
#include "ImageScaling.h"


ImageScaling::ImageScaling()
{
	scalex = 1;
	scaley = 1;
}
Object^ ImageScaling::Clone()
{
	return gcnew ImageScaling();
}
Void ImageScaling::Run()
{
	if (scalex == 0)scalex = 1;
	if (scaley == 0)scaley = 1;
	PointF^ maxp = gcnew PointF((image->Width - 1)*scalex, (image->Height - 1)*scaley);
	PointF^ minp = gcnew PointF(0, 0);
	float temp;
	if (minp->X > maxp->X)
	{
		temp = minp->X;
		minp->X = maxp->X;
		maxp->X = temp;
	}
	if (minp->Y > maxp->Y)
	{
		temp = minp->Y;
		minp->Y = maxp->Y;
		maxp->Y = temp;
	}
	result = gcnew Bitmap(Math::Ceiling(maxp->X - minp->X), Math::Ceiling(maxp->Y - minp->Y));
	for (int i = 0; i < result->Width; i++)
	{
		for (int j = 0; j < result->Height; j++)
		{
			//int t = Math::Floor((j + minp->Y) / scaley);
			result->SetPixel(i, j, image->GetPixel(Math::Floor((i + minp->X) / scalex), Math::Floor((j + minp->Y) / scaley)));
		}
	}
}
Bitmap^ ImageScaling::GetResult()
{
	return result;
}
List<Bitmap^>^ ImageScaling::GetResults()
{
	return gcnew List<Bitmap^>(gcnew array<Bitmap^>{result});
}