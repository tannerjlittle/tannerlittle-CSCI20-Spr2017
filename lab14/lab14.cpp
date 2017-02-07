// Created By: Tanner Little
// Created On: 2/7/2017
// 1.4 Lab - Floating Point

#include <iostream>
using namespace std;

int main()
{

    int userCents = 0;
    
    cout<<"How many coins (cents) do you have? ";
    cin>>userCents;
    
    double fee = userCents - (userCents * .109);
    
    cout<<"You have entered "<<userCents<<" cents."<<endl;
    
    int quarters = userCents / 25;
    int dimes = (userCents % 25) / 10;
    int nickels = (userCents % 10) / 20;
    int pennies = (userCents % 20) / 100;
    
    cout<<"That is "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels, and "<<pennies<<" pennies."<<endl;
    cout<<"After the 10.9% fee, cash received will be: "<<fee;
}