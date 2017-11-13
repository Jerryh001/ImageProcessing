#pragma once
#include "Operation.h"
ref class SobelEdgeDetection :
public Operation
{
	List<Bitmap^>^ result;
public:
	enum class ResultType{ Vertical = 0, Horizontal = 1, Both = 2 };
	[CategoryAttribute("參數"), DisplayName("下個圖片"), Description("連續動作時，用於成為下一動作輸入的圖片編號，若為最後一個動作本參數無效")]
	property ResultType result_index;
	SobelEdgeDetection();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};

