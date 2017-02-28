// Created By: Tanner Little
// Created On: 2/28/2017
// Lab 2.3 - Random values and swapping

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void SwappingLimits(int &upper, int &lower) { //function to swap input values
    
    lower = upper + lower;
    upper = lower - upper;
    lower = lower - upper;
    
    return;
    
}

void RandomNumber() {  //random number generator
    
    int upper = 0;
    int lower = 0;
    
    cout<<"Pick a lower limit: ";
    cin>>lower;
    cout<<endl<<"Pick an upper limit: ";
    cin>>upper;
    
    SwappingLimits(upper, lower);  //calling the swapping function in the random number function
    
    srand(time(0));
    cout<<"Here's a random number between "<<lower<<" and "<<upper<<": "
        <<upper + rand() % lower;
    return;

}

int main()
{
    
    int upper, lower;  //call the parameters in the main
    
    RandomNumber();
    
    return 0;

}