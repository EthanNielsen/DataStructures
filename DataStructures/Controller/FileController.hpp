//
//  FileController.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/2/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Model/Structures/LinkedList.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    
    static LinkedList<CrimeData> readDataToList(string filename);
    
};


#endif /* FileController_hpp */
