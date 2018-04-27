//
//  HashTable.h
//  DataStructures
//
//  Created by Nielsen, Ethan on 4/27/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include "../Nodes/HashNode.h"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
    
public:
    HashTable();
    ~HashTable();
    
    void insert(Type data);
    long getSize();
};

template <class Type>
HashTable<Type> :: HashTable()
{
    capacity = 101;
    innternalStorage = new HashNode<Type>*[capacity];
    size = 0;
    loadFactor = .80;
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] internalStorage;
}

template <class Type>
bool HashTable<Type> :: isPrime(long current)
{
    return false;
}

template <class Type>
long HashTable<Type> :: findPosition(HashNode<Type> * insert)
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: handleCollisiton(HashNode<Type> * current, long index)
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: getSize()
{
    return -1;
}

template <class Type>
long HashTable<Type> :: getNextPrime()
{
    return -1;
}

template <class Type>
void Hashtable<Type> :: resize()
{
    
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    
}
#endif /* HashTable_h */
