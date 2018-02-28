//
//  TestingStacksAndQueues.cpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/26/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

void stackVersusList()
{
    Stack<int> numberStack;
    LinkedList<int> numberList;
    Timer stackTimer, listTimer;
    
    for (int index = 0; index < 10; index++)
    {
        numberStack.add(index);
        numberList.add(index);
    }
    
    cout << "Get the third from the last item from the structure" << endl;
    
    int index = 0;
    int value = -99;
    stackTimer.startTimer();
    
    while (index < 7)
    {
        cout << numberStack.pop() << endl;
        
        index++;
    }
    
    stackTimer.stopTimer();
    index = 0;
    listTimer.startTimer();
    value = numberList.getFromIndex(7);
    listTimer.stopTimer();
    
    
    cout << "The time it took to work with Stack" << endl;
    stackTimer.displayInformation();
    cout << "The time it took to work with list" << endl;
    listTimer.displayInformation();
    
    cout << "What is left in the Stack" << endl;
    
    //Here is how to cast as a parent type to get access tto a method that is not defined in the subclass.
    LinkedList<int> * listVersion = &numberStack;
    int stackSize = listVersion->getSize();
    cout << "Stack size is: " << stackSize << endl;
    for (int index = 0; index < stackSize; index++)
    {
        cout << numberStack.pop() << endl;
    }
    
    cout << "What is left in the list" << endl;
    //Here is how to cast as a parent type to get access to a method that is not defined in the subclass.
    int listSize = numberList.getSize();
    cout << "List size is: " << listSize << endl;
    for (int index = 0; index < listSize; index++)
    {
        cout << numberList.getFromIndex(index) << "\t";
    }
}

void TestStacksAndQueues :: stackVersusQueue()
{
    vector<CrimeData> data = FileController :: readCrimeDataToVectorr("path to file");
    
    Stack<CrimeData> crimeStacck;
    Queue<CrimeData> crimeQueue;
    
    for (int index = 0; index < 100; index++)
    {
        CrimeData temp = data.at(index);
        crimeStack.push(temp);
        crimeQueue.enqueue(temp);
    }
    
    Queue<int> queue;
    Stack<int> stack;
    Queue<int> stack;
    Queue<int> queueFromStack;
    Stack<int> stackFromQueue;
    
    for (int index = 0; index < 10; index++)
    {
        queue.enqueue(index);
        stack.push(index);
    }
    
    for (int index = 0; index < 10; index++)
    {
        cout << index << endl;
        cout << "Queue result: " << queue.dequeue() << endl;
        cout << "Stack result: " << stack.pop() << endl;
    }
    
    for (int index = 0; index < 10; index++)
    {
        queue.enqueue(index):
        stack.push(index);
    }
    
    for (int index = 0; index < 10; index++)
    {
        
};

void stackVersusQueue
{
    
};
