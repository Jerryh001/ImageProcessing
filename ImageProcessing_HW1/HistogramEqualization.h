#pragma once
#include "Operation.h"
ref class HistogramEqualization :
public Operation
{
	Bitmap^ result;
public:
	HistogramEqualization();
	static Dictionary<int, int>^ HistogramEqualization::GetBrightnessSum(Bitmap^% image);
	static void BindBitmapChart(Bitmap^% image, Chart^% chart);
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};

