// Created By: Tanner Little
// Created On: 4/3/2017
// Assignment 3.0 - Dice game of PIG

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SCORE_LIMIT = 100;
int diceRoll();
int humanTurn(int& totalHumanScore);
int computerTurn(int& totalComputerScore);

int diceRoll() {
    int roll;

    roll = (int)(rand()%6)+1;
   
    return roll;
}

int humanTurn(int& totalHumanScore) {
    int currentScore = 0;
    int lastRoll;
    char rollOrHold;

    cout<<"Your total score is: " 
        <<totalHumanScore <<"." 
        <<endl;
    cout<<"Press R to roll again, or H to hold."
        <<endl;
    cin>>rollOrHold;

    while (rollOrHold == 'r') {
        srand (time(NULL));
        lastRoll = diceRoll();
        if (lastRoll == 1) {
            cout<<"You rolled a 1, your turn is over." 
                <<endl;
            break;
        }
        else {
            currentScore += lastRoll;
            cout<<"You rolled a " 
                <<lastRoll
                <<". Your score this turn is: " 
                <<currentScore 
                <<endl;
            cout<<"Press R to roll again, or H to hold." 
                <<endl;
            cin>>rollOrHold;
        }
    }
    while (rollOrHold == 'h') {
        totalHumanScore += currentScore;
        break;
    }
   
    return totalHumanScore;
}

int computerTurn(int& totalComputerScore) {
    int currentScore = 0;
    int lastRoll;

    cout<<"Computer's total score is: " 
        <<totalComputerScore<<"." 
        <<endl;
    while ((currentScore <= 20) && (currentScore != 1)) {
        lastRoll = diceRoll();
        if (lastRoll == 1) {
            cout<<"The computer rolled a 1, their turn is over." 
                <<endl;
            break;
        }
        else {
            currentScore += lastRoll;
            cout<<"The computer rolled a " 
                <<lastRoll
                <<". Computer's score this turn is: " 
                <<currentScore
                <<endl;
        }
    }
    if(currentScore >= 20) {
        totalComputerScore += currentScore;
        cout<<"After the computer's turn, they have gained an additional " 
            <<lastRoll
            <<" points." 
            <<endl;
    }
   
    return totalComputerScore;
}

int main() {
    bool win = 1;
    int totalHumanScore = 0, totalComputerScore = 0;

    cout<<"Welcome to the best game of PIG you've ever played! \n"
        <<"It is your turn. Press R to roll.\n";
    do {
        cout<<"Computers Score: "
            <<totalComputerScore 
            <<endl;
       
        humanTurn(totalHumanScore);
        computerTurn(totalComputerScore);
        
        if ((totalHumanScore < SCORE_LIMIT) && (totalComputerScore < SCORE_LIMIT)) {
            win = 1;
        }
        else {
            win = 0;
        }
    }
    while(win == 1);
   
    if ((win == 0) && (totalHumanScore > totalComputerScore)) {
        cout<<"You win!";
    }
    else {
        cout<<"You lost!";
    }
   
    return 0;
}