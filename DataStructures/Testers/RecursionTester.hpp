//
//  RecursionTester.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 3/5/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include <string>
#include "../Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
    string myMystery(string lol);
public:
    void testRecursionNumbers();
    void testRecursionString();
    void testRecursionLoL();
};

#endif /* RecursionTester_hpp */
