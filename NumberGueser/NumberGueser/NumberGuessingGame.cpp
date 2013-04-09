//
//  NumberGuessingGame.cpp
//  Number Guesing Game - Main File
//
//  Created by Anthony on 4/9/13.
//  Copyright (c) 2013 Anthony. All rights reserved.
//

#include <iostream>
#include "NumberGuesser.h"

struct lowerUpperBound {
    int lowerBnd;
    int upperBnd;
};

typedef struct lowerUpperBound Bounds;

void getLowerUpperBounds(Bounds *b);
bool playTheGame(NumberGuesser game);

int main(int argc, const char * argv[])
{

    bool keepPlaying = true;
    Bounds *numRange = new Bounds;

    getLowerUpperBounds(numRange);
    NumberGuesser *guesser = new NumberGuesser(numRange->lowerBnd, numRange->upperBnd);
    
    do {
        
        keepPlaying = playTheGame(*guesser);
        
        if(keepPlaying) {
            getLowerUpperBounds(numRange);
            guesser->setLowerNum(numRange->lowerBnd);
            guesser->setUpperNum(numRange->upperBnd);
        }
        
    } while(keepPlaying);
       
    std::cout << "Thanks for playing! Good-bye." << std::endl;
    
    return 0;
}

void getLowerUpperBounds(Bounds *b) {

        std::cout << "Enter lower number of range to guess from: ";
        std::cin >> b->lowerBnd;
    
        std::cout << "Enter upper number of range to guess from: ";
        std::cin >> b->upperBnd;
}

bool playTheGame(NumberGuesser game) {
    
    char userInput;
    bool inputLooping = true;
    
    while(!game.getIsCorrect()){
        
        std::cout << "You're thinking of a number between " << game.getLowerNum() << " and " << game.getUpperNum() << std::endl;
        std::cout << "Is the number " << game.getCurrentGuess() << "? [(h)igher, (l)ower, (c)orrect, (e)xit]: ";
        
        
        inputLooping = true;
        
        do {
            
            std::cin >> userInput;
        
            if(userInput == 'c' || userInput == 'C') {
                inputLooping = false;
                game.setIsCorrect(true);
            }
        
            else if (userInput == 'h' || userInput == 'H') {
                inputLooping = false;
                game.higher();
            
            }
        
            else if (userInput == 'l' || userInput == 'L'){
                inputLooping = false;
                game.lower();
            }
        
            else if (userInput == 'e' || userInput == 'E') {
                return false;
            }
        
            else {
                std::cout << "Invalid choice, please choose [(h)igher, (l)ower, (c)orrect, (e)xit]: ";
            }
            
        } while(inputLooping);
        
        
    }

    
    std::cout << "You picked the number " << game.getCurrentGuess() << ". Great guess!" << std::endl;
    std::cout << "Would you like to play again? [(y)es or (n)o]: ";
    

    do {
        
        std::cin >> userInput;
    
        if(userInput == 'y' || userInput == 'Y') {
            game.reset();
            return true;
        }
    
        else if (userInput == 'n' || userInput == 'N') {
        
            return false;
        }
    
        else {
            std::cout << "Invalid choice. " << std::endl;
            std::cout << "Would you like to play again? [(y)es or (n)o]: ";
        }
    } while(1==1);
}
