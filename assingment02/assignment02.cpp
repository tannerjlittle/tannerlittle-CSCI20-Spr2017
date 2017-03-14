// Created By: Tanner Little
// Created On: 3/9/2017
// Assignment 2.0 - Conversion program for distance. When the user enters a measurement it should convert it to miles, yards, feet, or inches.

#include <iostream>
using namespace std;

class DistanceConverter {
    
    public: 
        void SetDistanceFromMiles (double dMiles);
        void SetDistanceFromYards (double yards);
        void SetDistanceFromFeet (double feet);
        void SetDistanceFromInches (double inches);
        
        double GetDistanceAsMiles();
        double GetDistanceAsYards();
        double GetDistanceAsFeet();
        double GetDistanceAsInches();
        
        void PrintDistances();
        
        DistanceConverter();
        DistanceConverter(double dMiles);
        
    private:
        double miles_;
    
};

DistanceConverter::DistanceConverter() {
    miles_=0.0;
}

DistanceConverter::DistanceConverter(double dMiles) {
    dMiles=miles_;
}

void DistanceConverter::SetDistanceFromMiles(double dMiles) {
    miles_=dMiles;
}

double DistanceConverter::GetDistanceAsMiles() {
    return miles_;
}

void DistanceConverter::SetDistanceFromYards(double yards) {
    miles_ = (yards * 0.00056818);
}

double DistanceConverter::GetDistanceAsYards() {
    return miles_;
}

void DistanceConverter::SetDistanceFromFeet(double feet) {
    miles_ = (feet * 0.00018939);
}

double DistanceConverter::GetDistanceAsFeet() {
    return miles_;
}

void DistanceConverter::SetDistanceFromInches(double inches) {
    miles_ = (inches * 0.000015783);
}

double DistanceConverter::GetDistanceAsInches() {
    return miles_;
}

void DistanceConverter::PrintDistances() {
    cout<<"Miles: "
        <<GetDistanceAsMiles()
        <<endl
        <<"Yards: "
        <<GetDistanceAsYards()
        <<endl
        <<"Feet: "
        <<GetDistanceAsFeet()
        <<endl
        <<"Inches: "
        <<GetDistanceAsInches()
        <<endl;
}

int main ()
{
    DistanceConverter distance1;
    
        cout<<"Enter a distance in miles: ";
        cin>>dMiles;
        distance1.SetDistanceFromMiles();
        distance1.PrintDistances();
        cout<<endl;
        
    DistanceConverter distance2;
    
        cout<<"Enter a distance in yards: ";
        cin>>yards;
        distance2.SetDistanceFromYards();
        distance2.PrintDistances();
        cout<<endl;
        
    DistanceConverter distance3;
    
        cout<<"Enter a distance in feet: ";
        cin>>feet;
        distance3.SetDistanceFromFeet();
        distance3.PrintDistances();
        cout<<endl;
        
    DistanceConverter distance4;
        
        cout<<"Enter a distance in inches: ";
        cin>>inches;
        distance4.SetDistanceFromInches();
        distance4.PrintDistances();
        cout<<endl;
        
    return 0;
}