//
//  LinearNode.h
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/8/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef LinearNode_h
#define LinearNode_h
#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
    
public:
    //Construcors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};


#endif /* LinearNode_h */
