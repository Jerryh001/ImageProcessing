#include "stdafx.h"
#include "DisplayComponent.h"


DisplayComponent::DisplayComponent(Bitmap^ input)
{
	SetImage(input);
}
Void DisplayComponent::SetImage(Bitmap^ input)
{
	image = input;
}
Bitmap^ DisplayComponent::GetImage()
{
	return image;
}