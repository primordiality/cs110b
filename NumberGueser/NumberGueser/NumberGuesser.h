//
//  NumberGuesser.h
//  NumberGueser
//
//  Created by Anthony on 4/9/13.
//  Copyright (c) 2013 Anthony. All rights reserved.
//

#ifndef NumberGueser_NumberGuesser_h
#define NumberGueser_NumberGuesser_h

class NumberGuesser {
    
private:
    int lowNum, highNum, initialLower, initialHigher, currentGuess;
    
        
public:
    NumberGuesser(int lowerBound, int upperBound);
    void higher();
    void lower();
    int getCurrentGuess();
    void reset();
    
    
};


#endif
// 100 (50)

// low=guess, high=current higher
// low=current, high=guess lower