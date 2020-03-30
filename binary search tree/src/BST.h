/*
 * BST.h
 *
 *  Created on: 29-Mar-2020
 *      Author: Karthik Rao
 */

#ifndef BST_H_
#define BST_H_


class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};





#endif /* BST_H_ */
