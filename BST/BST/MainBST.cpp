#include "BST.h"

int main()
{
	BST my_BST;

	my_BST.add(5);
	my_BST.add(3);
	my_BST.add(7);
	my_BST.add(8);
	my_BST.add(6);
	my_BST.add(1);
	my_BST.add(4);
	my_BST.add(2);
	my_BST.add(5);

	my_BST.remove(4);


	system("pause");
	return 0;
}