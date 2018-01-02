#pragma once
#include "stdafx.h"
ref class OperationExecuter
{
	OperationExecuter();
public:
	static List<DisplayComponent^>^ Run(Bitmap^ origin, BindingList<Operation^>^ queued_operations);
};

