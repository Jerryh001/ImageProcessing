#pragma once
#include "Operation.h"
ref class SobelEdgeDetection :
public Operation
{
	List<Bitmap^>^ result;
public:
	enum class ResultType{ Vertical = 0, Horizontal = 1, Both = 2 };
	[CategoryAttribute("�Ѽ�"), DisplayName("�U�ӹϤ�"), Description("�s��ʧ@�ɡA�Ω󦨬��U�@�ʧ@��J���Ϥ��s���A�Y���̫�@�Ӱʧ@���ѼƵL��")]
	property ResultType result_index;
	SobelEdgeDetection();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	List<Bitmap^>^ GetResults() override;
};

