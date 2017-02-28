// Created By: Tanner Little
// Created On: 2/28/2017
// Lab 2.3 - Random values and swapping

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void SwappingLimits(int &upper, int &lower) {
    
    lower = upper + lower;
    upper = lower - upper;
    lower = lower - upper;
    
    return;
    
}

void RandomNumber() {
    
    int upper = 0;
    int lower = 0;
    
    cout<<"Pick a lower limit: ";
    cin>>lower;
    cout<<endl<<"Pick an upper limit: ";
    cin>>upper;
    
    SwappingLimits(upper, lower);
    
    srand(time(0));
    cout<<"Here's a random number between "<<lower<<" and "<<upper<<": "
        <<upper + rand() % lower;
    return;

}

int main()
{
    
    int upper, lower;
    
    RandomNumber();
    
    return 0;

}