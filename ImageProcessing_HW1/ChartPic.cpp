#include "stdafx.h"
#include "ChartPic.h"


ChartPic::ChartPic(Bitmap^ input) :DisplayComponent(input)
{
}
Control^ ChartPic::GetControl()
{
	Chart^ chart = gcnew Chart();
	ChartArea^ chartArea1 = gcnew ChartArea("ChartArea1");
	Series^ series1 = gcnew Series("Series1");
	Dictionary<int, int>^ d = HistogramEqualization::GetBrightnessSum(image);

	chartArea1->AxisX->IsMarginVisible = false;
	chartArea1->AxisX->LabelStyle->Enabled = false;
	chartArea1->AxisX->LineDashStyle = ChartDashStyle::NotSet;
	chartArea1->AxisX->LineWidth = 0;
	chartArea1->AxisX->MajorGrid->Enabled = false;
	chartArea1->AxisX->MajorTickMark->Enabled = false;
	chartArea1->AxisX->Maximum = 255;
	chartArea1->AxisX->Minimum = 0;

	chartArea1->AxisY->LabelStyle->Enabled = false;
	chartArea1->AxisY->LineDashStyle = ChartDashStyle::Dash;
	chartArea1->AxisY->LineWidth = 0;
	chartArea1->AxisY->MajorGrid->Enabled = false;
	chartArea1->AxisY->MajorTickMark->Enabled = false;
	
	chart->ChartAreas->Add(chartArea1);

	series1->ChartArea = "ChartArea1";
	series1->CustomProperties = L"EmptyPointValue=Zero, PointWidth=1";
	series1->XValueType = ChartValueType::Int32;
	series1->YValueType = ChartValueType::Int32;
	series1->Points->DataBindXY(d->Keys, d->Values);
	series1->Color = Color::Black;
	
	chart->Series->Add(series1);

	chart->Dock = DockStyle::Fill;
	
	return chart;
}