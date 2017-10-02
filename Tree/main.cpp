#include"stdafx.h"
#include"Tree.h"

int main() {

	unique_ptr<Node> rootPtr = make_unique<Node>(7);

	unique_ptr<Node> child1Ptr = make_unique<Node>(4);

	unique_ptr<Node> child2Ptr = make_unique<Node>(5);

	unique_ptr<Node> child3Ptr = make_unique<Node>(6);
	child1Ptr->SetBrother(move(child2Ptr));
	rootPtr->SetChild(move(child1Ptr));
	child1Ptr->SetChild(move(child3Ptr));

	Tree tree(move(rootPtr));
	tree.PrintBst();
	

	

	return 0;
}