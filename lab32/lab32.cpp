// Created By: Tanner Little
// Created On: 3/28/2017
// Lab 3.2 - a program that will calculate the income tax, and amount owed or to be refunded for a person (or couple)
#include <iostream>
#include <string>
using namespace std;

int main () {
    
    string nameFirst;
    string nameLast;
    string maritalStatus;
    double wages = 0.0;
    double withheld = 0.0;
    double adjIncome = 0.0;
    double taxOwed = 0.0;
    double refundEntitled = 0.0;
    double taxOwedFinal = 0.0;
    int switchCaseMarriage = 0;
    
    cout<<"Let's do some taxes"<<endl;
    
    cout<<"Please enter your last name: ";
    cin>>nameLast;
    cout<<endl
        <<"Please enter your first name: ";
    cin>>nameFirst;
    cout<<endl
        <<"Married or single?: ";
    cin>>maritalStatus;
    cout<<endl
        <<"Please enter gross wages (no comma, numbers only): ";
    cin>>wages;
    cout<<endl
        <<"Please enter amount withheld (numbers only): ";
    cin>>withheld;
    cout<<endl
        <<endl
        <<endl
        <<"----------"
        <<"----------"
        <<"----------"
        <<"----------"
        <<"----------"
        <<"----------"
        <<"----------"
        <<"----------"
        <<"----------"
        <<"----------"
        <<endl
        <<endl
        <<endl;
        
        if (maritalStatus == "single") {
            switchCaseMarriage = 1;
            
        }
        else {
            switchCaseMarriage = 2;
            
        }
    
        switch (switchCaseMarriage) {
            case 1:
                adjIncome = wages - 3900.0;
                
                if (adjIncome <= 0.0) {
                    taxOwed = 0.0;
                    
                }
                else if (adjIncome <= 8925.0) {
                    taxOwed = adjIncome * .10;
                    
                }
                else if (adjIncome <= 36250.0) {
                    taxOwed = 892.50 + ((adjIncome - 8925) * .15);
                    
                }
                else if (adjIncome <= 87850.0) {
                    taxOwed = 4991.25 + ((adjIncome - 36250) * .25);
                    
                }
                else if (adjIncome >= 87851.0) {
                    taxOwed = 17891.25 + ((adjIncome - 87850) * .28);
                    
                }
            break;    
            
            default:
                adjIncome = wages - 7800.0;
                
                if (adjIncome <=0.0) {
                    taxOwed = 0.0;
                    
                }
                else if (adjIncome <= 17850) {
                    taxOwed = adjIncome * .10;
                    
                }
                else if (adjIncome <= 72500) {
                    taxOwed = 1785 + ((adjIncome - 17850) * .15);
                    
                }
                else if (adjIncome >= 72501) {
                    taxOwed = 9982.50 + ((adjIncome - 72500) * .28);
                    
                }
            break;
            
        }
        
        if (taxOwed >= withheld) {
            taxOwedFinal = taxOwed - withheld;
            
            cout<<"Name: "<<nameFirst<<nameLast
                <<endl
                <<"Total Gross Adjusted Income: "<<adjIncome
                <<endl
                <<"Total tax owed: "<<taxOwedFinal
                <<endl
                <<"No refund."
                <<endl;
            
        }
        else {
            refundEntitled = withheld - taxOwed;
            
            cout<<"Name: "<<nameFirst<<" "<<nameLast
                <<endl
                <<"Total Gross Adjusted Income: "<<adjIncome
                <<endl
                <<"Total tax owed: "<<taxOwed
                <<endl
                <<nameFirst<<" "<<nameLast
                <<" is entitled to a REFUND of $"
                <<refundEntitled
                <<endl
                <<endl
                <<endl;
                
        }
        
    
}