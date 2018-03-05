//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 3/5/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    //This is the Fibonacci sequence
    if ( number == 0 || number == 1 )
    {
        return 1;
    }
    else
    {
        return fib (number - 1) + fib (number - 2);
    }
}

string RecursionTester :: mystery(string word)
{
    
    return 0;
}

void RecursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "Testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void RecursionTester :: testRecursionString()
{
    
}
