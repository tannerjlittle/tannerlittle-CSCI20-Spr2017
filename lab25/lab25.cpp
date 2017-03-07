// Created By: Tanner Little
// Created On: 3/7/2017
// Lab 2.5 - Create a “book” class that captures pieces of meta data about each book (title, author, copyright year).

#include <iostream>
#include <string>
using namespace std;

class books {
    
    public:
        void SetBookTitle(string title);
        void SetBookAuthor(string author);
        void SetBookYear(int year);
        
        void GetBookTitle() const;
        void GetBookAuthor() const;
        int GetBookYear() const;
        
        void PrintBookTitle() const;
        void PrintBookAuthor() const;
        void PrintBookYear() const;
        
    private:
        string bookTitle;
        string bookAuthor;
        int copyrightYear;
    
};

void books::SetBookTitle(string title) {
    bookTitle = title;
}

void books::SetBookAuthor(string author) {
    bookAuthor = author;
}

void books::SetBookYear(int year) {
    copyrightYear = year;
}

void books::GetBookTitle() const {
    return bookTitle;
}

void books::GetBookAuthor() const {
    return bookAuthor;
}

int books::GetBookYear() const {
    return copyrightYear;
}

void books::PrintBookTitle() const {
    cout<<"Title: "<<GetBookTitle()<<endl;
}

void books::PrintBookAuthor() const {
    cout<<"Author: "<<GetBookAuthor()<<endl;
}

void books::PrintBookYear() const {
    cout<<"Copyright Year: "<<GetBookYear()<<endl;
}

int main () {
    
    books bookOne;
    
        bookOne.SetBookTitle(title);
        cout<<"Enter book title one: ";
        cin>>title;
        cout<<endl;
        
        bookOne.SetBookAuthor(author);
        cout<<"Enter book author one: ";
        cin>>author;
        cout<<endl;
        
        bookOne.SetBookYear(year);
        cout<<"Enter book copyright year one: ";
        cin>>year;
        cout<<endl;
        
        bookOne.PrintBookTitle();
        bookOne.PrintBookAuthor();
        bookOne.PrintBookYear();
        
    books bookTwo;
    
        bookTwo.SetBookTitle(title);
        cout<<"Enter book title two: ";
        cin>>title;
        cout<<endl;
        
        bookTwo.SetBookAuthor(author);
        cout<<"Enter book author two: ";
        cin>>author;
        cout<<endl;
        
        bookTwo.SetBookYear(year);
        cout<<"Enter book copyright year two: ";
        cin>>year;
        cout<<endl;
        
        bookTwo.PrintBookTitle();
        bookTwo.PrintBookAuthor();
        bookTwo.PrintBookYear();
        
    books bookThree;
    
        bookThree.SetBookTitle(title);
        cout<<"Enter book title three: ";
        cin>>title;
        cout<<endl;
        
        bookThree.SetBookAuthor(author);
        cout<<"Enter book author three: ";
        cin>>author;
        cout<<endl;
        
        bookThree.SetBookYear(year);
        cout<<"Enter book copyright year three: ";
        cin>>year;
        cout<<endl;
        
        bookThree.PrintBookTitle();
        bookThree.PrintBookAuthor();
        bookThree.PrintBookYear();
        
    books bookFour;
    
        bookFour.SetBookTitle(title);
        cout<<"Enter book title four: ";
        cin>>title;
        cout<<endl;
        
        bookFour.SetBookAuthor(author);
        cout<<"Enter book author four: ";
        cin>>author;
        cout<<endl;
        
        bookFour.SetBookYear(year);
        cout<<"Enter book copyright year four: ";
        cin>>year;
        cout<<endl;
        
        bookFour.PrintBookTitle();
        bookFour.PrintBookAuthor();
        bookFour.PrintBookYear();
        
    books bookFive;
    
        bookFive.SetBookTitle(title);
        cout<<"Enter book title four: ";
        cin>>title;
        cout<<endl;
        
        bookFive.SetBookAuthor(author);
        cout<<"Enter book author four: ";
        cin>>author;
        cout<<endl;
        
        bookFive.SetBookYear(year);
        cout<<"Enter book copyright year four: ";
        cin>>year;
        cout<<endl;
        
        bookFive.PrintBookTitle();
        bookFive.PrintBookAuthor();
        bookFive.PrintBookYear();
    
}