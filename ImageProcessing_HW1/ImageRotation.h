#pragma once
#include "Operation.h"
ref class ImageRotation :
public Operation
{
	PointF^ Rotate(PointF^, double);
public:
	[CategoryAttribute("�Ѽ�"), DisplayName("����"), Description("�n���������઺���סA��쬰��")]
	property double degree;
	ImageRotation();
	Object^ Clone() override;
	Void Run() override;
};

