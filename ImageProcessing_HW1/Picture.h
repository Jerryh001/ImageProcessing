#pragma once
#include "DisplayComponent.h"
ref class Picture :
public DisplayComponent
{
public:
	Picture(Bitmap^ input);
	Control^ GetControl() override;
};

