#pragma once
#include "Operation.h"
ref class SmoothFilter :
public Operation
{
	Bitmap^ result;
public:
	enum class SmoothType{ Mean, Median };
	[CategoryAttribute("參數"), DisplayName("模式"), Description("決定要用哪種方式來Smooth，預設為Median")]
	property SmoothType type;
	SmoothFilter();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};

