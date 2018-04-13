//
//  BinarySearchTree.h
//  DataStructures
//
//  Created by Nielsen, Ethan on 4/9/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.h"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //MARK: Protected Methods
    int calculatedSize(BinaryTreeNode<Type> * startNode);
    int calculatedHeight(BinaryTreeNode<Type> * startNode);
    bool isBalance(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);

    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    //MARK: Public Methods
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

//Informational Method
template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculatedHeight(this->root);
}

template <class Type>
int BinarySearchTree<Type> :: calculatedHeight(BinaryTreeNode<Type> * current)
{
    if (current != nullptr)
    {
        return max(calculatedHeight(current->getLeftNode()), calculatedHeight(current->getRightNode())) + 1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    int size = 0;
    
    size += calculatedSize(this->root);
    
    return size;
}

template <class Type>
int BinarySearchTree<Type> :: calculatedSize(BinaryTreeNode<Type> * current)
{
    if(current != nullptr)
    {
        return calculatedSize(current->getLeftNode()) + calculatedSize(current->getRightNode()) + 1;
    }
    return 0;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size =  getSize();
    
    return isComplete(this->root, index, size);
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    if(startNode == nullptr)
    {
        return true;
    }
    
    if(index >= size)
    {
        return false;
    }
    
    return (isComplete(startNode->getLeftNode(), 2 * index + 1, size) && isComplete(startNode->getRightNode(), 2 * index + 2, size));
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(this->root);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalance(BinaryTreeNode<Type> * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculatedHeight(current->getLeftNode());
    rightHeight = calculatedHeight(current->getRightNode());
    
    int heightDifference = abs(leftHeight - rightHeight);
    bool leftBalanced = isBalance(current->getLeftNode());
    bool rightBalanced = isBalance(current->getRightNode());
    
    if (heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

//Traversal
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal() //Public Implementation
{
    inOrderTraversal(this->root);
}

// Protected Implementation
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        inOrderTraversal(currentNode->getLeftNode());
        cout << currentNode->getData() << endl;
        inOrderTraversal(currentNode->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode->getData() << endl;
        preOrderTraversal(currentNode->getLeftNode());
        preOrderTraversal(currentNode->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        postOrderTraversal(currentNode->getLeftNode());
        postOrderTraversal(currentNode->getRightNode());
        cout << currentNode->getData() << endl;
    }
}

//Data Operation
template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeftNode();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightNode();
            }
            else //Remove cerr after verification of understanding
            {
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return; //Okay because it is returning NOTHING
            }
        }
        
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setLeftNode(insertMe);
        }
        insertMe->setRootNode(previous);
    }
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinaryTreeNode<Type> * current = this->root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getData())
            {
                return true;
            }
            else if (itemToFind < current->getData())
            {
                current = current->getLeftNode();
            }
            else
            {
                current = current->getRightNode();
            }
        }
        return false;
    }
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)
{
    if(this->root == nullptr)
    {
        cout << "Empty tree so removal is not possible" << endl;
    }
    else
    {
        BinaryTreeNode<Type> * current = this->root;
        BinaryTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(getRidOfMe < current->getData())
                {
                    current = current->getLeftnode();
                }
                else
                {
                    current = current->getRightNode();
                }
                
                }
            
            if(current == nullptr)
            {
                cerr << "Item not found, removal unsuccessful" << endl;
            }
            else if(hasBeenFound)
            {
                if(current == this->root)
                {
                    removeNode(this->root);
                }
                else if(getRidOfMe < previous->getData())
                {
                    removeNode(previous->getLeftNode());
                }
                else
                {
                    removeNode(previous->getRightNode());
                }
            }
        }
    }
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    
    previous = removeMe->getRootNode();
    
    //Node is a leaf - has no child
    if(removeMe->getRightNode() == nullptr && removeMe->getLeftNode() == nullptr)
    {
        temp = removeMe;
        
        if(previous != nullptr && removeMe->getData() < previous->getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->getRightNode(removeMe);
        }
        
        delete temp;
    }
    //Node has only a left child
    else if(removeMe->getRightNode() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getLeftNode();
        
        if(previous != nullptr & temp->getData() < previous->getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && temp->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        
        removeMe->setRootNode(previous);
        
        delete temp;
    }
    //Node has only a right child
    else if(removeMe->getLeftNode() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getRightNode();
        if(previous != nullptr && removeMe->getData() < previous->getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr & removeMe->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        removeMe->setRightNode(previous);
        delete temp;
    }
    //Node has both children
    else
    {
        current = getRightMostChild(removeMe->getLeftNode());
        
        previous = current->getRootNode();
        removeMe = setData(current->getData());
        
        if(previous == nullptr)// Removing from the root
        {
            removeMe->setLeftNode(current->getLeftNode());
        }
        else
        {
            previous->setRightnode(current->getLeftNode());
        }
        if(current->getLeftNode() != nullptr)
        {
            current->getLeftNode()->setRootNode(removeMe);
        }
        delete current;
    }
    
    if(removeMe == nullptr || removeMe->getRootNode() == nullptr)
    {
        this->root = removeMe;
    }
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getLeftMostChild(BinaryTreeNode<Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while (currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getLeftNode();
    }
    
    return previous;
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode<Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while (currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getRightNode();
    }
    
    return previous;
}

template <class Type>
Type BinarySearchTree<Type> :: findMaximum()
{
    assert(this->root != nullptr);
    return getRightMostChild(this->root)->getData();
}

template <class Type>
Type BinarySearchTree<Type> :: findMinimum()
{
    assert(this->root != nullptr);
    return getLeftMostChild(this->root)->getData();
}
#endif /* BinarySearchTree_h */
