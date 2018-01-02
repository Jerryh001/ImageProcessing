#include "stdafx.h"
#include "Picture.h"


Picture::Picture(Bitmap^ input):DisplayComponent(input)
{
	
}
Control^ Picture::GetControl()
{
	PictureBox^ pic = gcnew PictureBox();
	pic->Dock = DockStyle::Fill;
	pic->SizeMode = PictureBoxSizeMode::Zoom;
	pic->Image = image;
	return pic;
}
