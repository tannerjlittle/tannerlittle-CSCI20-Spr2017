// Created By: Tanner Little
// Created On: 4/20/2017
// Lab 4.5 - Create user names without using c-string from user input

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string firstName;
    string lastName;
    
    LOOP: do {
        
        cout<<"Please enter your first name: ";
        cin>>firstName;
        cout<<"\n \nNow please enter you last name: ";
        cin>>lastName;
        
        if (firstName.size() > 10) {
            cout<<"Too long. Start over. Sorry. \n \n";
            goto LOOP;
        }
            
        if (lastName.size() > 20) {
            cout<<"Too long. Start over. Sorry. \n \n";
            goto LOOP;
        }
        
        cout<<"Username suggestions: \n \n"
            <<firstName.at(0)
            <<lastName
            <<endl
            <<firstName.substr(0, 2)
            <<lastName
            <<endl
            <<firstName
            <<lastName
            <<endl;
            
            goto END;
    
    } while (firstName == lastName);
        cout<<"These names are the same. \n \n";
    
    END: cout<<"--------------------------";
    
}