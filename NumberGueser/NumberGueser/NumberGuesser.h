//
//  NumberGuesser.h
//  Definitions for the NumberGuesser Class
//
//  Created by Anthony on 4/9/13.
//  Copyright (c) 2013 Anthony. All rights reserved.
//

#ifndef NumberGuesser_h
#define NumberGuesser_h

class NumberGuesser {
    
private:
    int lowNum, highNum, initialLower, initialHigher, currentGuess;
    bool isCorrect;
        
public:
    NumberGuesser(int lowerBound, int upperBound);
    
    void setLowerNum(int lowerBound) { lowNum = lowerBound; }
    int getLowerNum() { return lowNum; }
    
    
    void setUpperNum(int upperBound) { highNum = upperBound; }
    int getUpperNum() { return highNum; }
    
    void setIsCorrect(bool didGuess) { isCorrect = didGuess; }
    bool getIsCorrect() { return isCorrect; }
    
    
    void higher() { lowNum = currentGuess; }
    void lower() { highNum = currentGuess; }
    int getCurrentGuess();
    
    void reset();
};

#endif