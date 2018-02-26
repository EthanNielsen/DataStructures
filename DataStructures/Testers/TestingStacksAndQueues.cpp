//
//  TestingStacksAndQueues.cpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/26/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

template <class Type>
class stackVersusList
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
    stackTimer.startTime();
    
    while (index < 7)
    {
        cout << numberStack.pop() << endl;
        
        index++;
    }
    
    stackTimer.stopTimer();
    index = 0;
    listTimer.startTimer();
    value = numbersList.geFromindex(7);
    listTimer.stopTimer();
}

template <class Type>
class stackVersusQueue
{
    
};

template <class Type>
class stackVersusQueue
{
    
};
