#pragma once
#include "Operation.h"
ref class ImageRotation :
public Operation
{
	Bitmap^ result;
	PointF^ Rotate(PointF^, double);
public:
	[CategoryAttribute("�Ѽ�"), DisplayName("����"), Description("�n���������઺���סA��쬰��")]
	property double degree;
	ImageRotation();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};

