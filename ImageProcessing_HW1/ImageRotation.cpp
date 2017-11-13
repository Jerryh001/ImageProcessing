#include "stdafx.h"
#include "ImageRotation.h"


ImageRotation::ImageRotation()
{
}
PointF^ ImageRotation::Rotate(PointF^ p,double degree)
{
	return gcnew PointF(p->X*Math::Cos(degree*Math::PI / 180) - p->Y*Math::Sin(degree*Math::PI / 180), p->X*Math::Sin(degree*Math::PI / 180) + p->Y*Math::Cos(degree*Math::PI / 180));
}
Object^ ImageRotation::Clone()
{
	return gcnew ImageRotation();
}
Void ImageRotation::Run()
{
	PointF^ minp = gcnew PointF(0, 0);
	PointF^ maxp = gcnew PointF(0, 0);
	array<PointF^>^ corner = gcnew array<PointF^>{gcnew PointF(image->Width, 0), gcnew PointF(0, image->Height), gcnew PointF(image->Width, image->Height)};
	for each (PointF p in corner)
	{
		PointF^ temp = Rotate(p, degree);
		if (temp->X < minp->X)
		{
			minp->X = temp->X;
		}
		if (temp->X > maxp->X)
		{
			maxp->X = temp->X;
		}
		if (temp->Y < minp->Y)
		{
			minp->Y = temp->Y;
		}
		if (temp->Y > maxp->Y)
		{
			maxp->Y = temp->Y;
		}
	}
	result = gcnew Bitmap(Math::Ceiling(maxp->X - minp->X), Math::Ceiling(maxp->Y - minp->Y));
	Rectangle^ r = gcnew Rectangle(0, 0, image->Width, image->Height);
	for (int i = 0; i < result->Width; i++)
	{
		for (int j = 0; j < result->Height; j++)
		{
			PointF^ temp = Rotate(gcnew PointF(i + minp->X, j + minp->Y), -degree);
			Point^ origin = gcnew Point(Math::Round(temp->X), Math::Round(temp->Y));
			if (r->Contains(*origin))
			{
				result->SetPixel(i, j, image->GetPixel(origin->X, origin->Y));
			}
			else
			{
				result->SetPixel(i, j, Color::Transparent);
			}
		}
	}
}
Bitmap^ ImageRotation::GetResult()
{
	return result;
}
List<Bitmap^>^ ImageRotation::GetResults()
{
	return gcnew List<Bitmap^>(gcnew array<Bitmap^>{result});
}