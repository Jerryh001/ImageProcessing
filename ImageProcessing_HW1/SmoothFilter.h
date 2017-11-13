#pragma once
#include "Operation.h"
ref class SmoothFilter :
public Operation
{
	Bitmap^ result;
public:
	enum class SmoothType{ Mean, Median };
	[CategoryAttribute("�Ѽ�"), DisplayName("�Ҧ�"), Description("�M�w�n�έ��ؤ覡��Smooth�A�w�]��Median")]
	property SmoothType type;
	SmoothFilter();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};
