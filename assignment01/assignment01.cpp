// Created By: Tanner Little
// Created On: 2/16/2017
// 1.0 Assignment - Calculate the number of calories a person has expanded in his/her lifetime

#include <iostream>
#include <string>
using namespace std;

struct LifetimePerson {
  int age;
  string nameFirst;
  string nameLast;
    
};

int main()
{
    LifetimePerson person1;
    
    person1.age = 0;
    person1.nameFirst = "";
    person1.nameLast = "";
    int caloriesPerYear = 2000*365;
    int caloriesChicken = 96;
    
    cout<<"Please enter your first name: ";
    cin>>person1.nameFirst;
    cout<<endl;
    cout<<"Please enter your last name: ";
    cin>>person1.nameLast;
    cout<<endl;
    cout<<"Please enter your age: ";
    cin>>person1.age;
    cout<<endl;
     int caloriesExpended = (caloriesPerYear*person1.age);
     int totalChicken = (caloriesExpended/caloriesChicken);
    cout <<"The average person expends "<<caloriesPerYear<<" calories per year."
         <<" Here is your calories expended (burned) ticket: "
         <<endl
         <<"Name: "<<person1.nameFirst<<" "<<person1.nameLast
         <<endl
         <<"Age: "<<person1.age
         <<endl
         <<"Calories expended: "<<caloriesExpended
         <<endl
         <<"So, if a fried chicken wing has "<<caloriesChicken<<" calories..."
         <<" That's "<<totalChicken<<" fried chicken wings! That's a lot of KFC."
         <<endl;

}