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
    
    cout <<"This loop should print 4 lines"<< endl;
    for (int index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0,2312);
    
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 2312" << endl;
    cout << numbers.getEnd()->getData() << " Is at the end of the list and shouldbe 32567" << endl;
    
}

void LinkedListTester :: testListWithData()
{
    Timer listTimer;
    
    listTimer.startTimer();
    LinkedList<CrimeData> crimes = FileController :: readDataToList("/Users/enie1762/Documents/CS20420/DataStructures/DataStructures/Data/crime.csv");
    listTimer.stopTimer();
    cout << "This is how long it took to read the structure into our custom data structure" << endl;
    listTimer.displayInformation();
    
    listTimer.resetTimer();
    cout << "Here is how long it takes to access a random data value" << endl;
    listTimer.startTimer();
    int randomLocation = (rand() * rand()) % crimes.getSize();
    cout << "The random index is " << randomLocation << endl;
    double totalViolentRate = crimes.getFromIndex(randomLocation).getAllViolentRates();
    listTimer.stopTimer();
    cout << "The random crime stat is: " << totalViolentRate << " , and here is the time" << endl;
    listTimer.displayInformation();
    
}
