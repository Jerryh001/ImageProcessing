#include "stdafx.h"
#include "SobelEdgeDetection.h"


SobelEdgeDetection::SobelEdgeDetection()
{
	result_index = ResultType::Both;
}
Object^ SobelEdgeDetection::Clone()
{
	return gcnew SobelEdgeDetection();
}
Void SobelEdgeDetection::Run()
{
	ColorTransformation t;
	t.SetImage(image);
	Bitmap^ input = t.GetResult();
	int vmask[3][3] = { -1, 0, 1, -2, 0, 2, -1, 0, 1 };
	int hmask[3][3] = { -1, -2, -1, 0, 0, 0, 1, 2, 1 };
	result = gcnew List<Bitmap^>();
	result->Add(gcnew Bitmap(image));
	result->Add(gcnew Bitmap(image));
	result->Add(gcnew Bitmap(image));
	for (int i = 0; i < input->Width; i++)
	{
		for (int j = 0; j < input->Height; j++)
		{
			if (i == 0 || j == 0 || i + 1 == input->Width || j + 1 == input->Height)
			{
				result[0]->SetPixel(i, j, Color::Black);
				result[1]->SetPixel(i, j, Color::Black);
				result[2]->SetPixel(i, j, Color::Black);
			}
			else
			{
				int newv = 0;
				int newh = 0;
				for (int u = 0; u < 3; u++)
				{
					for (int v = 0; v < 3; v++)
					{
						Color^ p = input->GetPixel(i + u - 1, j + v - 1);
						newv += p->R*vmask[u][v];
						newh += p->R*hmask[u][v];
					}
				}
				newv = Math::Abs(newv);
				newh = Math::Abs(newh);
				int newb = newv + newh;
				if (newv > 255) newv = 255;
				if (newh > 255) newh = 255;
				if (newb > 255) newb = 255;
				result[0]->SetPixel(i, j, Color::FromArgb(newv, newv, newv));
				result[1]->SetPixel(i, j, Color::FromArgb(newh, newh, newh));
				result[2]->SetPixel(i, j, Color::FromArgb(newb, newb, newb));
			}
		}
	}
}
Bitmap^ SobelEdgeDetection::GetResult()
{
	return result[(int)result_index];
}
List<Bitmap^>^ SobelEdgeDetection::GetResults()
{
	return result;
}