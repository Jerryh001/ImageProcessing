#pragma once
#include "stdafx.h"
#include "Operation.h"
ref class ColorExtraction :
public Operation
{
public:
	enum class ResultType{ Red=0, Green=1,Blue=2 };
	[CategoryAttribute("�Ѽ�"), DisplayName("�U�ӹϤ�"), Description("�s��ʧ@�ɡA�Ω󦨬��U�@�ʧ@��J���Ϥ��A�Y���̫�@�Ӱʧ@���ѼƵL��")]
	property ResultType result_index;
	ColorExtraction();
	Object^ Clone() override;
	Void Run() override;
	Bitmap^ GetResult() override;
	
};

