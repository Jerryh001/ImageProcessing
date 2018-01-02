#pragma once
#include "Operation.h"
ref class ImageScaling :
public Operation
{
public:
	[CategoryAttribute("參數"), DisplayName("X軸放大倍率"), Description("要放大的倍率，小於1會縮小，負值會造成左右鏡像，為0則不做事(與1相同)")]
	property double scalex;
	[CategoryAttribute("參數"), DisplayName("Y軸放大倍率"), Description("要放大的倍率，小於1會縮小，負值會造成上下鏡像，為0則不做事(與1相同)")]
	property double scaley;
	ImageScaling();
	Object^ Clone() override;
	Void Run() override;
};

