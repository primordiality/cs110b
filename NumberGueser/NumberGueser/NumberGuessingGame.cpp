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
    char userInput;
    
    std::cout << "Enter lower number of range to guess from: ";
    std::cin >> smallNum;
    std::cout << std::endl;
    
    std::cout << "Enter upper number of range to guess from: ";
    std::cin >> bigNum;
    std::cout << std::endl;
    
    
        
    NumberGuesser guesser(smallNum, bigNum);
    
    while(!guesser.getIsCorrect()){
        
        std::cout << "You're thinking of a number between " << guesser.getLowerNum() << " and " << guesser.getUpperNum() << std::endl;
        std::cout << "Is the number " << guesser.getCurrentGuess() << "? [(h)igher, (l)ower, (c)orrect]: ";
        std::cin >> userInput;
    
        if(userInput == 'c' || userInput == 'C') {
            guesser.setIsCorrect(true);
        }
        
        else if (userInput == 'h' || userInput == 'H') {
            guesser.higher();
            
        }
        
        else {
            guesser.lower();
        }
        
        
    }

    std::cout << "You picked the number " << guesser.getCurrentGuess() << ". Great guess!" << std::endl;
    std::cout << "Would you like to play again? [(y)es or (n)o]: ";
    
    
    return 0;
}
