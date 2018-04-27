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
    
}

template <class Type>
bool HashTable<Type> :: isPrime(long current)
{
    
}


#endif /* HashTable_h */
