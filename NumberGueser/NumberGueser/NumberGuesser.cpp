//
//  NumberGuesser.cpp
//  Implementation for the NumberGuesser Class
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
    currentGuess = 0;
    isCorrect = false;
}

int NumberGuesser::getCurrentGuess() {
    
    if(!isCorrect) {
        currentGuess = ((lowNum+highNum) / 2);
        return currentGuess;
    }
    
    else {
        return currentGuess;
    }
}

void NumberGuesser::reset() {
    
    lowNum = initialLower;
    highNum = initialHigher;
    isCorrect = false;
    
}