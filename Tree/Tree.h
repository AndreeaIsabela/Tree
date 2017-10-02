#pragma once
#include"stdafx.h"
#include"Node.h"

class Tree
{
public:
	Tree(NodePtr aRoot) :mRoot(move(aRoot)) {};

	const Node*  GetRoot() const { return mRoot.get(); };
	void PrintBst();

private:
	NodePtr mRoot;
	queue<Node*> mChildrenQueue;
};

