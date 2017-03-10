// Created By: Tanner Little
// Created On: 3/9/2017
// Lab 2.6 - Create a class that converts temperatures between Kelvin, Fahrenheit and Celsius.

#include <iostream>
using namespace std;

class TemperatureConverter {
    
    public:
        void SetTempFromKelvin(double kelvinTemp);
        double GetTempFromKelvin();
        
        void SetTempFromCelsius(double celsiusTemp);
        void SetTempFromFahrenheit(double fahrenheitTemp);
        double GetTempAsCelsius();
        double GetTempAsFahrenheit();
        TemperatureConverter();
        TemperatureConverter(double kelvinTemp);
        
        void PrintTemperatures();
    
    private:
        double kelvin_;
};

TemperatureConverter::TemperatureConverter() {     //default constructor
    kelvin_=0.0;   
}

TemperatureConverter::TemperatureConverter(double kelvinTemp) {     //overloaded constructor
    kelvinTemp=kelvin_;
}

void TemperatureConverter::SetTempFromKelvin(double kelvinTemp) {     //storing kelvin value
    kelvin_=kelvinTemp;
}

double TemperatureConverter::GetTempFromKelvin() {
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelsius(double celsiusTemp) {     //taking kelvin value and converting to celsius
    kelvin_ = (celsiusTemp + 273.15);
}

double TemperatureConverter::GetTempAsCelsius() {
    return kelvin_;
}

void TemperatureConverter::SetTempFromFahrenheit(double fahrenheitTemp) {     //taking fahrenheit value and converting to fahrenheit
    kelvin_ = (5 * (fahrenheitTemp - 32) / 9) + 273.15;
}

double TemperatureConverter::GetTempAsFahrenheit() {
    return kelvin_;
}

void TemperatureConverter::PrintTemperatures() {
    cout<<"Kelvin: "
        <<GetTempFromKelvin()
        <<endl
        <<"Celsius: "
        <<GetTempAsCelsius()
        <<endl
        <<"Fahrenheit: "
        <<GetTempAsFahrenheit()
        <<endl;
}

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}