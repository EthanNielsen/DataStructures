//
//  Controller.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/2/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Array.hpp"

class Controller
{
private:
    void testArray();
    void findMaxAndMin();
public:
    void start();
};
#endif /* Controller_hpp */
