/*
 * BST.cpp
 *
 *  Created on: 29-Mar-2020
 *      Author: Karthik Rao
 */

#include "BST.h"

BST::BST(int val){
	value = val;
	left = nullptr;
	right = nullptr;
}

BST& BST::insert(int val)
{
	if (  val < value)
	{
		if(left == nullptr)
		{
			left = new BST(val);

		}
		else
		{
			left->insert(val);
		}
	}
	else
	{
		if (right == nullptr)
		{
			right = new BST(val);
		}
		else
		{
			right->insert(val);
		}


	}

	return *this;
}
