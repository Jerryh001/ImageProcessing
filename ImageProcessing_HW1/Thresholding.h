#pragma once
#include "Operation.h"
ref class Thresholding :
public Operation
{
public:
	[CategoryAttribute("�Ѽ�"), DisplayName("���e"), Description("(0~255)�j�󵥩���e�Ȫ��C��|�Q�]���զ�")]
	property unsigned short int threshold;
	Thresholding();
	Object^ Clone() override;
	Void Run() override;
};

