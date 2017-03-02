// Created By: Tanner Little
// Created On: 3/1/2017
// Lab 2.4 - Random number generator with conversion with pounds and kilograms

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swappingLimits(int &upper, int &lower) { //function to swap input values
    
    upper = lower + upper;
    lower = upper - lower;
    upper = upper - lower;
    
    return;
    
}

int randomNumber(int upper, int lower) {  //random number generator
    
    int randNum = 0;
    
    swappingLimits(upper, lower);  //calling the swapping function in the random number function
    
    cout<<upper<<endl<<lower<<endl;
    srand(time(0));
    randNum = upper + rand() % lower;
    return randNum;

}

double conversionPounds(int randNum) {
    
    double kilograms = 0.0;
    
    kilograms = randNum * (1 / 2.2);
    return kilograms;
    
}

int main()
{
    
    int randNum;
    int upper = 0;
    int lower = 0;
    double kilograms;
    
    cout<<"Pick a lower limit: ";
    cin>>lower;
    cout<<endl<<"Pick an upper limit: ";
    cin>>upper;
    
    randomNumber(upper, lower);
    
    cout<<"Here's a random number between "<<lower<<" and "<<upper<<": ";
    cout<<randNum
        <<endl
        <<"Now we can convert that pound amount into kilograms...";
    
    conversionPounds(kilograms);
    
    cout<<endl
        <<kilograms
        <<" kilograms";  //I got lost and this is where I ended up before I had to go to my doctor's appointment
    
    return 0;

}