#include "stdafx.h"
#include "Operation.h"


Operation::Operation()
{
}

Void Operation::SetImage(Bitmap^ input)
{
	image = input;
	results = gcnew List<DisplayComponent^>();
	Run();
}

Bitmap ^ Operation::GetResult()
{
	return results[0]->GetImage();
}

List<DisplayComponent^>^ Operation::GetResults()
{
	return results;
}
