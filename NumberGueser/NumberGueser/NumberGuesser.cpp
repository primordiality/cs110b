//
//  NumberGuesser.cpp
//  NumberGueser
//
//  Created by Anthony on 4/9/13.
//  Copyright (c) 2013 Anthony. All rights reserved.
//

#include "NumberGuesser.h"

NumberGuesser::NumberGuesser(int lowerBound, int upperBound) {
    
    lowNum = lowerBound;
    initialLower = lowerBound;
    highNum = upperBound;
    initialHigher = upperBound;
    
}

void NumberGuesser::higher() {
    
    lowNum = currentGuess;

}

void NumberGuesser::lower() {
    
    highNum = currentGuess;
}


int NumberGuesser::getCurrentGuess() {
    
    currentGuess = ((lowNum+highNum) / 2);
    return currentGuess;
    
}

void NumberGuesser::reset() {
    
    lowNum = initialLower;
    highNum = initialHigher;
    
}