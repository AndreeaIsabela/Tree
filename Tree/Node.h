#pragma once
#include"stdafx.h"
class Node;
using NodePtr = unique_ptr<Node>;
class Node
{
public:
	Node(int aValue):mValue(aValue) {};
	
	bool HasChild();
	void SetBrother( NodePtr aBrother) { mBrother = move(aBrother); };
	void SetChild( NodePtr aChild) { mChild = move(aChild); };
	NodePtr & GetChild() { return mChild; };
	NodePtr &GetBrother() { return mBrother; };
	int GetValue() {return mValue;};


private:
	int mValue;
	NodePtr mChild;
	NodePtr mBrother;
};

