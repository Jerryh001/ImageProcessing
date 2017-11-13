#pragma once
#include "Operation.h"
ref class ImageRotation :
public Operation
{
	Bitmap^ result;
	PointF^ Rotate(PointF^, double);
public:
	[CategoryAttribute("參數"), DisplayName("角度"), Description("要順時鐘旋轉的角度，單位為度")]
	property double degree;
	ImageRotation();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};

