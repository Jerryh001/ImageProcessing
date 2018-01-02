#pragma once
#include "Operation.h"
ref class OverlapEdgeDetection :
public Operation
{
public:
	[CategoryAttribute("把计"), DisplayName("耬"), Description("娩絫盎代耬")]
	property unsigned short int threshold;
	[CategoryAttribute("把计"), DisplayName("肅︹"), Description("舼瓜┮ノ肅︹")]
	property Color color;
	OverlapEdgeDetection();
	Object^ Clone() override;
	Void Run() override;
};

