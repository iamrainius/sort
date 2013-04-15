//
//  main.cpp
//  merge_sort
//
//  Created by Zhang Jing on 13-4-14.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "BinarySortTree.h"

int main(int argc, const char * argv[])
{

    int seq[] = {45, 24, 53, 45, 12, 24, 90};
    BinarySortTree* sortTree = new BinarySortTree(seq, 7);
    sortTree->print();
    return 0;
}

