#pragma once
#include "stdafx.h"
ref class DisplayComponent abstract

{
protected:
	DisplayComponent(Bitmap^ input);
	Bitmap^ image;
public:

	virtual Control^ GetControl() = 0;
	Void SetImage(Bitmap^ input);
	Bitmap^ GetImage();
};