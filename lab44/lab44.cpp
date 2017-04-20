// Created By: Tanner Little
// Created On: 4/20/2017
// Lab 4.4 - Create user names using c-string from user input

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    
    char firstName[10];
    char lastName[20];
    
    LOOP: do {
        
        cout<<"Please enter your first name: ";
        cin>>firstName;
        cout<<"\n \nNow please enter you last name: ";
        cin>>lastName;
        
        if (strlen(firstName) > 10) {
            cout<<"Too long. Start over. Sorry. \n \n";
            goto LOOP;
        }
            
        if (strlen(lastName) > 20) {
            cout<<"Too long. Start over. Sorry. \n \n";
            goto LOOP;
        }
        
        cout<<"Username suggestions: \n \n"
            <<firstName[0]
            <<lastName
            <<endl
            <<firstName[0]
            <<firstName[1]
            <<lastName
            <<endl
            <<firstName
            <<lastName
            <<endl;
            
            goto END;
    
    } while (strcmp (firstName, lastName) != 0);
        cout<<"These names are the same. \n \n";
    
    END: cout<<"--------------------------";
}