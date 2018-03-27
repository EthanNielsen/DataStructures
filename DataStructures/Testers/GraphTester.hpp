//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 3/27/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "../Model/Structures/NonLinear/Graph.h"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
}
#endif /* GraphTester_hpp */
