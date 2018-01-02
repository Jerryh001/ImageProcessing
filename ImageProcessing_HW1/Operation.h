#pragma once
#include "stdafx.h"
#include "DisplayComponent.h"
ref class Operation abstract : System::ICloneable
{
protected:
	Bitmap^ image;
	virtual Void Run() = 0;
	List<DisplayComponent^>^ results;
public:
	[Browsable(false)]
	property String^ Name{String^ get(){ return GetType()->Name;  }}
	Operation();
	Void SetImage(Bitmap^ image);
	virtual Object^ Clone() = 0;
	virtual Bitmap^ GetResult();
	List<DisplayComponent^>^ GetResults();

};

