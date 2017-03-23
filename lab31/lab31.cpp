// Created By: Tanner Little
// Created On: 3/23/2017
// Lab 3.1 - A program for a new cell phone company that uses complicated formulas to determine the charges for their service.

#include <iostream>
#include <string>
using namespace std;

int main () {
    
    int smartPhones = 0;
    int dumbPhones = 0;
    int amtTablets = 0;
    int gbOfData = 0;
    int typeOfPhone = 0;
    int dumbOrTab = 0;
    char addItem = '-';
    char addItem2 = '-';
    char discount = '-';
    
    cout<<"Enter type of phone desired (1=smartphone, 2=dumbphone)."<<endl;
    cin>>typeOfPhone;
    
        if (typeOfPhone == 1) {
            cout<<"Enter number of smartphones desired: ";
            cin>>smartPhones;
            cout<<endl;
            cout<<"Would you like to add an item? (y/n): ";
            cin>>addItem;
            cout<<endl;
                
                if (addItem == 'y') {
                    cout<<"What item would you like to add? (1=dumbphone, 2=tablet)";
                    cin>>dumbOrTab;
                    cout<<endl;
                        
                        if (dumbOrTab == 1) {
                            cout<<"Enter number of dumb phones desired: ";
                            cin>>dumbPhones;
                            cout<<endl;
                            cout<<"Would you like to add a tablet? (y/n)";
                            cin>>addItem2;
                            cout<<endl;
                            
                                if (addItem2 == 'y') {
                                    cout<<"Enter number of tablets desired: ";
                                    cin>>amtTablets;
                                    cout<<endl;
                                    cout<<"---------------"
                                        <<"---------------"
                                        <<"---------------"
                                        <<"---------------"
                                        <<"---------------"
                                        <<endl
                                        <<endl
                                        <<endl;
                                
                                    cout<<"Here is your plan: "
                                        <<endl
                                        <<smartPhones
                                        <<" smartphones"
                                        <<endl
                                        <<dumbPhones
                                        <<" dumbphones"
                                        <<endl
                                        <<amtTablets
                                        <<" tablets"
                                        <<endl
                                        <<"Now for data..."
                                        <<endl;
                                }
                                else {
                                    cout<<"Okay.";
                                    cout<<"Here is your plan: "
                                        <<endl
                                        <<smartPhones
                                        <<" smartphones"
                                        <<endl
                                        <<dumbPhones
                                        <<" dumbphones"
                                        <<endl
                                        <<"Now for data..."
                                        <<endl;

                                }
                        }
                        else {
                            cout<<"Enter number of tablets desired: ";
                            cin>>amtTablets;
                            cout<<endl
                                <<"Here is your plan: "
                                <<endl
                                <<smartPhones
                                <<" smartphones"
                                <<endl
                                <<amtTablets
                                <<" tablets"
                                <<endl
                                <<"Now for data..."
                                <<endl;
                        }
                }
                else {
                    cout<<endl
                        <<"Here is your plan: "
                        <<endl
                        <<smartPhones
                        <<" smartphones"
                        <<endl
                        <<"Now for data..."
                        <<endl;
                }
            cout<<"Enter amount of data desired (GB): ";
            cin>>gbOfData;
        }
        else {
            gbOfData = 0;
            cout<<"Enter number of dumb phones desired: ";
            cin>>dumbPhones;
            cout<<endl;
        }
    
    cout<<"Do you qualify for a family discount (over 2 lines) or a corporate discount? "
        <<endl
        <<"If so, enter which one now (f=family, c=corporate): ";
    cin>>discount;
    cout<<endl;
        
        if (discount == 'c') {
            cout<<"10% corporate discount added!"
                <<endl
                <<endl;
        }
        else if (discount == 'f') {
            cout<<"Family discount added!"
                <<endl
                <<endl;
        }
        else {
            cout<<"No discount added."
                <<endl
                <<endl;
        }
    
    cout<<"Complete Plan: "
        <<endl
        <<smartPhones
        <<" smartphones"
        <<endl
        <<dumbPhones
        <<" dumbphones"
        <<endl
        <<amtTablets
        <<" tablets"
        <<endl
        <<gbOfData
        <<" GB of data"
        <<endl;
    if (discount == 'f') {
            cout<<"Family Discount"
                <<endl;
        }
        else if (discount == 'c') {
            cout<<"Corporate Discount"
                <<endl;
        }
        else {
            cout<<"No Discount"
                <<endl;
        }
    
}