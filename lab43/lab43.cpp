// Created By: Tanner Little
// Created On: 4/13/2017
// Lab 4.23 - A shopping cart using arrays of objects

#include <iostream>
#include <string>
using namespace std;

class ShoppingCart {
    
    public:
        void setItemArray(string itemArray);
        string getItemArray();
        void setItemPriceArray(double priceArray);
        double getItemPriceArray();
        void setItemInventoryArray(int inventoryArray);
        int getItemInventoryArray();
        
        ShoppingCart();
        ShoppingCart(string itemName);
    
    private:
        string item_;
        double price_;
        int inventory_;
    
};

ShoppingCart::ShoppingCart() {
    item_="j";
}

ShoppingCart::ShoppingCart(string itemName) {
    itemName=item_;
}

void ShoppingCart::setItemArray(string itemArray) {
    itemArray="j";
    itemArray=item_;
}

string ShoppingCart::getItemArray() {
    return item_;
}

void ShoppingCart::setItemPriceArray(double priceArray) {
    priceArray=14.95;
    priceArray=price_;
}

double ShoppingCart::getItemPriceArray() {
    return price_;
}

void ShoppingCart::setItemInventoryArray(int inventoryArray) {
    inventoryArray=10;
    inventoryArray=inventory_;
}

int ShoppingCart::getItemInventoryArray() {
    return inventory_;
}

int main () {
    
    char itemSelection;
    double totalPrice = 0.0;
    int totalItems = 0;
    
    ShoppingCart inventoryArr[10];
    ShoppingCart priceArr[10];
    ShoppingCart itemArr[10];
    
    itemArr[10].setItemArray{"Hat", "Sweater", "Mug", "BluRay", "Game", "Collectible", "Necklace", "RuckSack", "Poster", "Keychain"};
    priceArr[10].setItemPriceArray{14.95, 14.95, 14.95, 14.95, 14.95, 49.95, 49.95, 49.95, 49.95, 49.95};
    inventoryArr[10].setItemInventoryArray{10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    
    cout<<"We got some killer items for you to buy. Make a selection. \n \n \n"
        <<itemArr[0].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[0].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[0].getItemInventoryArray()
        <<endl
        <<itemArr[1].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[1].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[1].getItemInventoryArray()
        <<endl
        <<itemArr[2].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[2].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[2].getItemInventoryArray()
        <<endl
        <<itemArr[3].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[3].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[3].getItemInventoryArray()
        <<endl
        <<itemArr[4].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[4].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[4].getItemInventoryArray()
        <<endl
        <<itemArr[5].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[5].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[5].getItemInventoryArray()
        <<endl
        <<itemArr[6].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[6].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[6].getItemInventoryArray()
        <<endl
        <<itemArr[7].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[7].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[7].getItemInventoryArray()
        <<endl
        <<itemArr[8].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[8].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[8].getItemInventoryArray()
        <<endl
        <<itemArr[9].getItemArray()
        <<" ::::: "
        <<"Price: $"
        <<priceArr[9].getItemPriceArray()
        <<" ::::: "
        <<"Inventory: "
        <<inventoryArr[9].getItemInventoryArray()
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