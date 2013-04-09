//
//  NumberGuesser.h
//  NumberGueser
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
    void higher();
    void lower();
    int getLowerNum() { return lowNum; }
    int getUpperNum() { return highNum; }
    void setLowerNum(int lowerBound) { lowNum = lowerBound; }
    void setUpperNum(int upperBound) { highNum = upperBound; }
    int getCurrentGuess();
    void setIsCorrect(bool didGuess);
    bool getIsCorrect() { return isCorrect; }
    void reset();
    
    
};


#endif
// 100 (50)

// low=guess, high=current higher
// low=current, high=guess lower