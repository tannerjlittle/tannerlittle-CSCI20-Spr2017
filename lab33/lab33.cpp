// Created By: Tanner Little
// Created On: 3/28/2017
// Lab 3.3 - A number guessing game program
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    
    int computerNumber = 0;
    int userNumber = 0;
    
    srand(time(0));
    computerNumber = 1 + rand() % 50;
    
    cout<<"Random number generated..."
        <<endl;
    
    while (userNumber != computerNumber){
        cout<<"Enter your guess between 1 and 50: ";
        cin>>userNumber;
    
        if (userNumber > computerNumber) {
            cout<<"Too high."
                <<endl;
        }
        else if (userNumber < computerNumber) {
            cout<<"Too low."
                <<endl;
        }
        else if (userNumber > 50) {
            cout<<"Please enter a valid number between 1 and 50"
                <<endl;
        }
        else if (userNumber < 1) {
            cout<<"Please enter a valid number between 1 and 50"
                <<endl;
        }
        
    }
    
    for (userNumber == computerNumber; userNumber = 1; ++userNumber) {
        cout<<"Just right"
            <<endl;
    }
    
    return 0;
}