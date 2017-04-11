// Created By: Tanner Little
// Created On: 4/11/2017
// Lab 4.1 - Create a class called ArrayTools which will store a single integer array and each of the following functions.

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin<<myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}

class ArrayTools {

    public:
        void PrintArray();
        int Find_min(int minVal);
        int Find_max(int maxVal);
        int Find_sum(int sum);
        int NumEvenOrOdd(int evenOrOdd);
        int Search(int searchNumber);
        int Is_sorted();
    
    private:
        int myArray_[];
    
};

ArrayTools::ArrayTools() {
    myArray_={0};
}

ArrayTools::ArrayTools(int minVal) {
    {minVal}=myArray_;
}

int ArrayTools::Find_min(int minVal) {
    if (minVal>a[i]) {
        minVal=a[i];
    }
}

int ArrayTools::Find_max(int maxVal) {
     if (minVal<a[i]) {
        minVal=a[i];
    }
}

int ArrayTools::Find_sum(int sum) {
    sum+=myArray_[i];
}

int ArrayTools::Search(int searchNumber) {
    if (myArray_[i]==searchNumber) {
        break;
    }
}

int ArrayTools::Is_sorted() {
    
}

