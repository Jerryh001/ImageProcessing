#include "stdafx.h"
#include "Operation.h"


Operation::Operation()
{
}

Void Operation::SetImage(Bitmap^% input)
{
	image = input;
	Run();
}