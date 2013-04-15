//
//  BinarySortTree.cpp
//  merge_sort
//
//  Created by Zhang Jing on 13-4-15.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//
#include <iostream>
#include "BinarySortTree.h"
using namespace std;

BinarySortTree::BinarySortTree(int* values, int length)
{
    _pTree = NULL;
    init(values, length);
}

void BinarySortTree::init(int* values, int length)
{
    for (int i=0; i<length; i++) {
        int value = values[i];
        insert(&_pTree, value);
    }
}

void BinarySortTree::insert(BinaryTreeNode** pNode, int value)
{
    if (*pNode == NULL)
    {
        
        *pNode = new BinaryTreeNode;
        (*pNode)->value = value;
        (*pNode)->leftChild = (*pNode)->rightChild = NULL;
        
    } else if ((*pNode)->value > value) {
        insert(&((*pNode)->leftChild), value);
    } else if ((*pNode)->value < value) {
        insert(&((*pNode)->rightChild), value);
    }
}

void BinarySortTree::print()
{
    print(_pTree);
}

void BinarySortTree::print(BinaryTreeNode* pNode)
{
    if (pNode != NULL)
    {
        print(pNode->leftChild);
        cout<<pNode->value<<", ";
        print(pNode->rightChild);
    }
}