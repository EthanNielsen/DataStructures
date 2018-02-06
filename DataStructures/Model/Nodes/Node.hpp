//
//  Node.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/6/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

<class Type>
{
protected:
    Type data;

public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
TypeNode<Type> :: getData()
{
    return data;
}

#endif /* Node_hpp */
