//============================================================================
// Name        : binary.cpp
// Author      : Karthik Rao
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <assert.h>
#include <limits.h>
#include "BST.h"
using namespace std;




int findClosestValueInBstHelper(BST *tree, int target, int closer)
{
	int closest_value_root = 0;
	/* Need to make sure we pick up nearest value which would be from a parent node at this point*/
	if(abs(target - closer) > abs(target - tree->value))
	{
		closer = tree->value;
	}

	if((tree->value > target) && (tree->left != nullptr))
	{
		closest_value_root = findClosestValueInBstHelper(tree->left, target,closer);
	}
	else if ((tree->value < target )&&(tree->right != nullptr))
	{
		closest_value_root = findClosestValueInBstHelper(tree->right, target,closer);
	}
	else
	{
		closest_value_root = closer;
	}

  return closest_value_root;
}
/* function that is exposed to main */

int findClosestValueInBst(BST *tree, int target)
{
	return findClosestValueInBstHelper(tree, target ,INT_MAX);
}



int main()
{
	BST test(200);
	test.insert(24)
		.insert(56)
		.insert(78)
		.insert(-100)
		.insert(10);

	 [test](){
		cout << "Test 1 ->"<< endl;
		 if(findClosestValueInBst(&test, 79) == 100)
			cout << "Test 1 Pass" << endl;
		 else
			 cout << "Test 1 Fail" << endl;

	}();

	[&test](){
			cout << "Test 2 ->"<< endl;
			 if(findClosestValueInBst(&test, 24) == 24)
				cout << "Test 2 Pass" << endl;
			 else
				 cout << "Test 2 Fail" << endl;

		}();

	[&test](){
			cout << "Test 3 ->"<< endl;
			if(findClosestValueInBst(&test, -126) == -100)
				cout << "Test 3 Pass" << endl;
			else
				cout << "Test 3 Fail" << endl;

				}();
	return 0;
}
