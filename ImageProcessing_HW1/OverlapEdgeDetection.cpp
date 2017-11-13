#include "stdafx.h"
#include "OverlapEdgeDetection.h"


OverlapEdgeDetection::OverlapEdgeDetection()
{
	threshold = 128;
	color = Color::Lime;
}
Object^ OverlapEdgeDetection::Clone()
{
	return gcnew OverlapEdgeDetection();
}
Void OverlapEdgeDetection::Run()
{
	result = gcnew Bitmap(image);
	SobelEdgeDetection sed;
	sed.result_index = SobelEdgeDetection::ResultType::Both;
	sed.SetImage(image);
	Thresholding t;
	t.threshold = this->threshold;
	t.SetImage((Bitmap^%)sed.GetResult());
	Bitmap^ b = t.GetResult();
	for (int i = 0; i < image->Width; i++)
	{
		for (int j = 0; j < image->Height; j++)
		{
			if (b->GetPixel(i, j).R == 255)
			{
				result->SetPixel(i, j, color);
			}
		}
	}
}
Bitmap^ OverlapEdgeDetection::GetResult()
{
	return result;
}
List<Bitmap^>^ OverlapEdgeDetection::GetResults()
{
	return gcnew List<Bitmap^>(gcnew array<Bitmap^>{result});
}