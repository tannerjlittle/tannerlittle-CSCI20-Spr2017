// Created By: Tanner Little
// Created On: 2/2/2017

#include <iostream>
using namespace std;

int main()
{
    int curPop = 324472000;
    int popRiseYear = ((4*60)*(24)*365);         //1 person every 15 seconds equals 4 people every minute
    int X = 0;
    
    cout << "The current population is " <<curPop<< endl;
    cout << "How many years in the future would you like to predict the population? " <<endl;
    cin >> X;
    
    int futurePop = curPop+(popRiseYear*X);
    int curYear = 2017;
    int futureYear = (curYear+X);
    
    cout << "In the year " <<futureYear<< ", the population will be " <<futurePop<< " in the United States." <<endl;
}