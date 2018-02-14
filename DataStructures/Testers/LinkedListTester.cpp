//
//  LinkedListTester.cpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/14/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "LinkedListTester.hpp"


void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 0" << endl;
    
    numbers.addAtIndex(1,2);
    numbers.add(324);
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and should be 9" << endl;
    
    
}
