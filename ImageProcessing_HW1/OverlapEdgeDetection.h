#pragma once
#include "Operation.h"
ref class OverlapEdgeDetection :
public Operation
{
public:
	[CategoryAttribute("�Ѽ�"), DisplayName("���e"), Description("��t�������e��")]
	property unsigned short int threshold;
	[CategoryAttribute("�Ѽ�"), DisplayName("�C��"), Description("���|���ϤW�ɩҥΪ��C��")]
	property Color color;
	OverlapEdgeDetection();
	Object^ Clone() override;
	Void Run() override;
};

