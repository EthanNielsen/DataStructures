//
//  AbstractBaseClass.h
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/8/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef AbstractBaseClass_h
#define AbstractBaseClass_h

#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

class listStructure()
{
protected:
    int size;

    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Hepler
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* AbstractBaseClass_h */
