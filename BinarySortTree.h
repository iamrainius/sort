//
//  BinarySortTree.h
//  merge_sort
//
//  Created by Zhang Jing on 13-4-15.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef merge_sort_BinarySortTree_h
#define merge_sort_BinarySortTree_h

typedef struct binary_tree_node
{
    int value;
    struct binary_tree_node* leftChild;
    struct binary_tree_node* rightChild;
} BinaryTreeNode;

class BinarySortTree
{
private:
    BinaryTreeNode* _pTree;
    
    void init(int* values, int length);
    void insert(BinaryTreeNode** pNode, int value);
    void print(BinaryTreeNode* pNode);
    
public:
    BinarySortTree(int* values, int length);
    void print();
};


#endif
