#pragma once
#include "Operation.h"
ref class ColorTransformation :
public Operation
{
public:
	ColorTransformation();
	Object^ Clone() override;
	Void Run() override;
};