#include "Tree.h"


void Tree::PrintBst()
{
	if (mRoot) {
		mChildrenQueue.push(mRoot.get());
		cout << mRoot->GetValue() << endl;
	}
	else {
		cout << "Empty";
	}

	while (!mChildrenQueue.empty()) {
		auto temp = mChildrenQueue.front();
		mChildrenQueue.pop();

		if (temp->GetBrother()) {
			mChildrenQueue.push(temp->GetBrother().get());
			cout << temp->GetBrother()->GetValue() << " ";
		}
		if (temp->GetChild()) {
			mChildrenQueue.push(temp->GetChild().get());
			cout << temp->GetChild()->GetValue() << endl;
		}
	}
}

