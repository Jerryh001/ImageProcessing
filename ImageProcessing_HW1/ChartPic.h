#pragma once
#include "DisplayComponent.h"
ref class ChartPic :
public DisplayComponent
{
public:
	ChartPic(Bitmap^ input);
	Control^ GetControl() override;
};

