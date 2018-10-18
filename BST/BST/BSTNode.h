#ifndef BSTNODE_H_
#define BSTNODE_H_
#include <sstream>
#include "NodeInterface.h"


class BSTNode : public NodeInterface

{
public:

	int data;
	BSTNode* left;
	BSTNode* right;

	BSTNode(int the_data, BSTNode*left_value = NULL, BSTNode*right_value = NULL) : data(the_data), left(left_value), right(right_value){}
	
	~BSTNode(){}

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	int getData()
	{		
		return data;
	}
	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	NodeInterface * getLeftChild()
	{
		return left;
	}

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	NodeInterface * getRightChild()
	{
		return right;
	}

};

#endif