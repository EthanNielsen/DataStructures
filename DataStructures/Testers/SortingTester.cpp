//
//  SortingTester.cpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 3/15/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "SortingTester.hpp"
void SortingTester :: quickSort(vector<CrimeData> & data, int low, int high)
{
    if (low < high)
    {
        int partitionPoint = partition(data, low, high);
        
        quickSort(data, low, partitionPoint - 1);
        quickSort(data, partitionPoint + 1, high);
    }
}

int SortingTester :: partition(vector<CrimeData> & info, int low, int high)
{
    CrimeData pivotValue = info [high];
    int smallest = low - 1;
    
    for (int index = low; index < high - 1; index++)
    {
        if (info[index] < pivotValue)
        {
            smallest++;
            
        }
    }
}
