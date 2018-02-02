//
//  Timer.hpp
//  DataStructures
//
//  Created by Nielsen, Ethan on 2/2/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
    clock_t executeTime;
    
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
