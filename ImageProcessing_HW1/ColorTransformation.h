#pragma once
#include "Operation.h"
ref class ColorTransformation :
public Operation
{
	Bitmap^ result;
public:
	ColorTransformation();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};