// Created By: Tanner Little
// Created On: 2/23/2017
// Lab 2.2 - Write a random number generating function.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void RandomNumber() {
    
    srand(time(0));
    cout<<"Here's a random number between 1 and 100: "
        <<1 + rand() % 100;
    return;

}

int main()
{

    RandomNumber();
    
    return 0;

}