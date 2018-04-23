//
//  N_AryTreeNode.h
//  DataStructures
//
//  Created by Nielsen, Ethan on 3/27/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef N_AryTreeNode_h
#define N_AryTreeNode_h

#include <vector>
#include "Node.hpp"
using namespace std;

template <class Type>
class N_ArrayTreeNode : public Node<Type>
{
private:
    vector<N_ArrayTreeNode<Type>*> nodes;
    N_ArrayTreeNode<Type> * root;
    
public:
    N_ArrayTreeNode<Type>();
    ~N_ArrayTreeNode<Type>();
    N_ArrayTreeNode<Type>(Type data);
    
    vector<N_ArrayTreeNode<Type>*> getNodes();
    N_ArrayTreeNode<Type> * getRoot();
    int getChildCount();
    
    void setRoot(N_ArrayTreeNode<Type> * root);
    void addChild(Type data);
};

template <class Type>
N_ArrayTreeNode<Type> :: N_AryTreeNode()
{ //unused
}

template <class Type>
N_ArrayTreeNode<Type> :: N_ArrayTreeNode(Type data) : Node<Type>(data)
{
}

template <class Type>
N_ArrayTreeNode<Type> :: ~N_ArrayTreeNode()
{
    for (int index = nodes.size() - 1; index >= 0; index --)
    {
        delete nodes[index];
}
    
template <class Type>
N_ArrayTreeNode<Type> * N_ArrayTreeNode<Type> :: getRoot()
{
    return root;
}
 
template <class Type>
vector<N_ArrayTreeNode<Type>*> N_ArrayTreeNode<Type> :: getNodes()
{
    return nodes;
}
    
template <class Type>
int N_ArrayTreeNode<Type> :: getChildCount()
{
    return nodes.size();
}

template <class Type>
void N_ArrayTreeNode<Type> :: setRoot(N_ArrayTreeNode<Type> * root)
{
    this->root = root;
}
    
template <class Type>
void N_ArrayTreeNode<Type> :: addChild(Type data)
{
    N_ArrayTreeNode<Type> * node = new N_ArrayTreeNode<Type>(data);
    nodes.push_back(node);
}
    
#endif /* N_AryTreeNode_h */
