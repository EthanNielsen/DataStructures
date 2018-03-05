//
//  Controller.cpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/2/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

// The code below sorts through all the Crime Data and finds the larges and smallest part of it.
void Controller :: start()
{
    RecursionTester test;
    test.testRecursionNumbers();
    test.testRecursionString();
    test.testRecursionLoL();
    
//    ArrayTester myTest;
//    findMaxAndMin();
//
//    testArray();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/enie1762/Documents/CS20420/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        else if (myData [maxIndex] < myData [index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
    
//
//    for (int i = 200; i < 216; i++)
//    {
//        cout << myData[i] << endl;
//    }
//
}

void Controller :: testArray()
{
    Array<int>ethanArray(65);
    
    ethanArray[0] = 123;
    ethanArray.setAtIndex(0, 321);
    
    cout << ethanArray[0] << endl;
}
