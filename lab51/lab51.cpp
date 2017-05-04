// Created By: Tanner Little
// Created On: 5/4/2017
// Lab 5.1 - Take the following code and comment it to demonstrate that you understand what it is doing.  It has some errors, you should describe these.

#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;     //Initializing a variable, nameLength, with a value 0
    char *name = new char[];     //Initializing a new array heap for the pointer name of type char for C-String
                                 //Error in the definition, array should have a size

    cout << "Please enter a 10 letter word or less" << endl;     //Prompting for input
    cin >> name;     //Input for a C-String into the new heap char array

    char *head  = name;     //New pointer of type char for head pointing to the heap name
    char *tail = name;     //New pointer of type char for tail pointing to the heap name
    nameLength = strlen(*name);     //analyzing the user input and accessing the heap to get the length of the C-String
                                    //Error for the strlen command. Change "*name" to "name"

    cout << "Your word is " << firststr << endl;     //Outputting the C-String
                                                     //Error. "firststr" has not been declared

    if (nameLength<10)     //Start of if loop to output different items after reading C-String while keeping the length under 10
    {
         while (*head != '\0')      
         {
                cout << *head;     //While the location of head is being read, output each char until reaching the null character
                head++;
         }                      
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;     //Output warning user if C-String is over 10
     }

     cout << endl;

     tail = &name[strlen(name) - 1];     //changes tail to the array at name with a size that is one less than the length of name

     if (nameLength < 10)     //Start of if loop to output different items after reading C-String while keeping the length under 10
     {
          while (tail != name)
          {
                 cout << *tail;     //While the location of tail is being read, output each char until reaching the null character
                 tail--;
          }
     }
     cout << endl;

     head = name;     //assigning head to what is in name
     tail = &name[strlen(name) - 1];     //changes tail to the array at name with a size that is one less than the length of name

     head++;     //iterating the size of head up by one
     tail--;     //iterating the size of tail down by one

     if (*head == *tail)     //When head and tail reach the same length from both ends
     {
         cout << "It is an palindrome!" << endl;     //Output to user saying it is a palindrome
     }
     else
     {
         cout << "It is not an palindrome" << endl;     //If they do not read the same from head and tail, output telling user that it is not a palindrome
     }

     return 0; 
}