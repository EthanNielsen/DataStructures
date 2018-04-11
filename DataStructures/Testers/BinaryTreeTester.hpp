//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 3/27/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.h"
#include "../Model/Structures/NonLinear/BinarySearchTree.h"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
