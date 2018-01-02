#pragma once
#include "stdafx.h"
#include "Operation.h"
ref class ColorExtraction :
public Operation
{
public:
	enum class ResultType{ Red=0, Green=1,Blue=2 };
	[CategoryAttribute("參數"), DisplayName("下個圖片"), Description("連續動作時，用於成為下一動作輸入的圖片，若為最後一個動作本參數無效")]
	property ResultType result_index;
	ColorExtraction();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	
};

