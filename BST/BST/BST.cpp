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
	if (does_exsist(root,data))
	{
		return false;
	}
	else
	{
		return (insert(root, data));
		
	}
}

/*
* Attempts to remove the given int from the BST tree
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool BST::remove(int data)
{
		return(del_data(root, data));

}
/*
* Removes all nodes from the tree, resulting in an empty tree.
*/
void BST::clear()
{
	if (root == NULL)
	{
		return;
	}

	BSTNode* node_ptr = root;

	while (!(remove(node_ptr->getData())))
	{		
		node_ptr = root;
	}

	root = NULL;
}

bool BST::does_exsist(BSTNode* &local_root, int data)
{
	if (local_root == NULL)
	{
		return false;
	}
	if (data < (local_root->getData()))
	{		
		return does_exsist(local_root->left, data);
	}		
	else if (data > local_root->getData())
	{		
		return does_exsist(local_root->right, data);
	}		
	else
		return true;

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
	if (local_root == NULL)
	{
		return false;
	}
	else 
	{
		if (erase_data < local_root->getData())
		{		
			return del_data(local_root->left, erase_data);
		}			
		else if (erase_data > local_root->getData())
		{			
			return del_data(local_root->right, erase_data);
		}		
		else 
		{ 
			BSTNode* old_root = local_root;
			if (local_root->left == NULL)
			{
				local_root = local_root->right;
			}
			else if (local_root->right == NULL)
			{
				local_root = local_root->left;
			}
			else
			{				
				replace_parent(old_root,old_root->left );
			}
			cout << "Remove" << erase_data << endl;
			delete old_root;
			return true;
		}
	}
}

void BST::replace_parent(BSTNode*& old_root, BSTNode*& local_root)
{
	if (local_root->right != NULL) 
	{		
		replace_parent(old_root, local_root->right);
	}
	else 
	{
		
		old_root->data = local_root->data;
		old_root = local_root;
		local_root = local_root->left;
	}
}

