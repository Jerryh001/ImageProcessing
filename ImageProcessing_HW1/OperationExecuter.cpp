#include "stdafx.h"
#include "OperationExecuter.h"


OperationExecuter::OperationExecuter()
{
}
List<DisplayComponent^>^ OperationExecuter::Run(Bitmap^ origin, BindingList<Operation^>^ queued_operations)
{
	List<DisplayComponent^>^ ans = gcnew List<DisplayComponent^>();
	if (queued_operations->Count > 0)
	{
		Bitmap^ temp = gcnew Bitmap(origin);
		for each (Operation^% op in queued_operations)
		{
			op->SetImage(temp);
			temp = op->GetResult();
		}
		ans = queued_operations[queued_operations->Count - 1]->GetResults();
		if (ans->Count < 3)
		{
			ans->Insert(1, gcnew ChartPic(origin));
		}
	}
	
	return ans;
}