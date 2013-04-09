//
//  NumberGuessingGame.cpp
//  Number Guesing Game - Main File
//
//  Created by Anthony on 4/9/13.
//  Copyright (c) 2013 Anthony. All rights reserved.
//

#include <iostream>
#include "NumberGuesser.h"




int main(int argc, const char * argv[])
{

    int smallNum, bigNum = 0;
    
    std::cout << "Enter lower number of range to guess from: ";
    std::cin >> smallNum;
    std::cout << std::endl;
    
    std::cout << "Enter upper number of range to guess from: ";
    std::cin >> bigNum;
    std::cout << std::endl;
    
    
        
    NumberGuesser guesser(smallNum, bigNum);
    
    std::cout << "Think of a number between " << smallNum << " and " << bigNum << std::endl;

    
    return 0;
}
