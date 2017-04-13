// Created By: Tanner Little
// Created On: 4/13/2017
// Lab 4.2 - A shopping cart with parallel arrays

#include <iostream>
using namespace std;

int main() {
    
    string itemsArray[10] = 
        {"Hat", "Sweater", "Mug", "BluRay", "Game", "Collectible", "Necklace", "RuckSack", "Poster", "Keychain"};
    double itemPrice[10] = 
        {14.95, 14.95, 14.95, 14.95, 14.95, 49.95, 49.95, 49.95, 49.95, 49.95};
    int itemInventroy[10] = 
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    char itemSelection;
    double totalPrice = 0.0;
    int totalItems = 0;
    
    cout<<"We got some killer items for you to buy. Make a selection. \n \n \n"
        <<itemsArray[0]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[0]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[0]
        <<endl
        <<itemsArray[1]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[1]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[1]
        <<endl
        <<itemsArray[2]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[2]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[2]
        <<endl
        <<itemsArray[3]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[3]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[3]
        <<endl
        <<itemsArray[4]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[4]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[4]
        <<endl
        <<itemsArray[5]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[5]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[5]
        <<endl
        <<itemsArray[6]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[6]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[6]
        <<endl
        <<itemsArray[7]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[7]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[7]
        <<endl
        <<itemsArray[8]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[8]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[8]
        <<endl
        <<itemsArray[9]
        <<" ::::: "
        <<"Price: $"
        <<itemPrice[9]
        <<" ::::: "
        <<"Inventory: "
        <<itemInventroy[9]
        <<endl;
    
    while (itemSelection != 'q') {
        cout<<endl
            <<endl;
        cout<<"What item would you like to purchase? Enter the first letter of the item (enter 'q' to quit): ";
        cin>>itemSelection;
        
        if (itemSelection == 'h' || itemSelection == 's' || itemSelection == 'm' || itemSelection == 'b' || itemSelection == 'g') {
            totalPrice+=14.95;
        }
        else if (itemSelection == 'c' || itemSelection == 'n' || itemSelection == 'r' || itemSelection == 'p' || itemSelection == 'k'){
            totalPrice+=49.95;
        }
        totalItems+=1;
    }
    
    cout<<"Amount of items ordered: "
        <<totalItems
        <<endl
        <<"Total price: $"
        <<totalPrice
        <<endl;
    
}