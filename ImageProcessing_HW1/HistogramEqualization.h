#pragma once
#include "Operation.h"
ref class HistogramEqualization :
public Operation
{
public:
	HistogramEqualization();
	static Dictionary<int, int>^ GetBrightnessSum(Bitmap^ image);
	Object^ Clone() override;
	Void Run() override;
};

