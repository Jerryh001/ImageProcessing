// stdafx.h : 可在此標頭檔中包含標準的系統 Include 檔，
// 或是經常使用卻很少變更的
// 專案專用 Include 檔案
//

#pragma once

// TODO:  在此參考您的程式所需要的其他標頭
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace System::Windows::Forms::DataVisualization::Charting;
#include "Operation.h"
#include "ColorExtraction.h"
#include "ColorTransformation.h"
#include "SmoothFilter.h"
#include "HistogramEqualization.h"
#include "Thresholding.h"
#include "SobelEdgeDetection.h"
#include "OverlapEdgeDetection.h"
#include "ImageRotation.h"
#include "ImageScaling.h"