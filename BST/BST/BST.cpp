#include "BST.h"



BST::BST()
{
	root = NULL;
}
BST::~BST()
{
	clear();
}

//Please note that the class that implements this interface must be made
//of objects which implement the NodeInterface

/*
* Returns the root node for this tree
*
* @return the root node for this tree.
*/
NodeInterface * BST::getRootNode()
{
	return root;
}

/*
* Attempts to add the given int to the BST tree
*
* @return true if added
* @return false if unsuccessful (i.e. the int is already in tree)
*/
bool BST::add(int data)
{
	
}

/*
* Attempts to remove the given int from the BST tree
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool BST::remove(int data)
{
	

}
/*
* Removes all nodes from the tree, resulting in an empty tree.
*/
void BST::clear()
{
	
}

bool BST::does_exsist(BSTNode* &local_root, int data)
{
	

}

bool BST::insert(BSTNode*& local_root, int insert_data)
{
	
	if (local_root == NULL) 
	{
		local_root =new BSTNode(insert_data);
		cout << insert_data << "\n ";
		return true;
	}
	else
	{
		if (insert_data < local_root->getData())
		{
			cout << "going left" << ", ";
			
			return insert(local_root->left, insert_data);
		}			
		else if (insert_data > local_root->getData())
		{
			cout << "going right" << ", ";			
			return insert(local_root->right, insert_data);
		}			
		else 
		{
			return false;
		}
	}
}
bool BST::del_data(BSTNode*& local_root, int erase_data)
{
	
}

void BST::replace_parent(BSTNode*& old_root, BSTNode*& local_root)
{
	
}

