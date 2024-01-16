#include "game.h"
#include <iostream>
#include <string>

using namespace std;

Game::Game(int maxNum)
{
    maxNumber=maxNum;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNum << " as a maximum value"<< endl;
}

Game::~Game(){
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
void Game::printGameResult(){
    cout << "You guessed the right answer = " << playerGuess << " with " <<numOfGuesses << " guesses" << endl;
}
void Game::play(){
    bool peliLapi = false;
    numOfGuesses = 0;
    srand(time(0));
    randomNumber = rand() % 10 +1;
    while (peliLapi == false){
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses += 1;
        if (playerGuess > randomNumber){
            cout << "Your guess is too big" << endl;
        }else if (playerGuess < randomNumber){
            cout << "Your guess is too small" << endl;
        }else{
            cout << "Your guess is right = " << playerGuess << endl;
            printGameResult();
            peliLapi = true;

        }
    }

}
