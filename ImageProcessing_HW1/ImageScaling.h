#pragma once
#include "Operation.h"
ref class ImageScaling :
public Operation
{
public:
	[CategoryAttribute("�Ѽ�"), DisplayName("X�b��j���v"), Description("�n��j�����v�A�p��1�|�Y�p�A�t�ȷ|�y�����k�蹳�A��0�h������(�P1�ۦP)")]
	property double scalex;
	[CategoryAttribute("�Ѽ�"), DisplayName("Y�b��j���v"), Description("�n��j�����v�A�p��1�|�Y�p�A�t�ȷ|�y���W�U�蹳�A��0�h������(�P1�ۦP)")]
	property double scaley;
	ImageScaling();
	Object^ Clone() override;
	Void Run() override;
};

