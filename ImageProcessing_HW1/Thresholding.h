#pragma once
#include "Operation.h"
ref class Thresholding :
public Operation
{
public:
	[CategoryAttribute("參數"), DisplayName("門檻"), Description("(0~255)大於等於門檻值的顏色會被設為白色")]
	property unsigned short int threshold;
	Thresholding();
	Object^ Clone() override;
	Void Run() override;
};

