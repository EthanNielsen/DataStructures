//
//  Array.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/2/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h> // Used for validating user supplied data.
#include <iostream> //Used for traccking and debug statements.

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray; // Data member for an arrray
    int size; // Makes life easy for us by maintaining this information.
    
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace); //This is how the array will act
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size >  0); // Only assign positive values, no zero or negative numbers.
    this->size = size; // -> is the selector meaning thisis a pointer.
    
    internalArray = new Type[size];
}

//This code takes the values in the Array and assignes a copy of it.
template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this->size = toCopy.getSize();
    
    //Build Data Structure
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}

template <class Type>
Array<Type> :: ~Array()
{
    delete [] internalArray;
}

// Than reassign the array if (&toAssign != this)
template <class Type>
Array<Type> & Array<Type> :: operator = (const Array<Type> & toAssign) // using the operator means that me as a coder needs to play attention to what this code is saying.
{
    if (&toAssign != this)
    {
        if (size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type [size];
        }
        
        for (int index = 0; index < size; index++)
        {
            internalArray[index] = toAssign[index];
        }
    }
    return *this;
}


// "& Type" referencce =  left side square brackets. You can change the value if you have access to the reference. Right had sideType Array with no reference opperator

template <class Type>// Left hand of = sign -- assigns to reference
Type & Array<Type> :: operator [] (int index)
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

template <class Type> // Right hand of = sign -- copy
Type Array<Type> :: operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

// Return the size
template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

// Gettter, Stores the variable and returns the variable.
template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    
    Type value = internalArray[index];
    
    return value;
}

// Setter
template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
    assert(pos >= 0 && pos < size);
    internalArray[pos] = item;
}

#endif /* Array_hpp */
