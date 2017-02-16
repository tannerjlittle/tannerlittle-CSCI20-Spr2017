// Created By: Tanner Little
// Created On: 2/16/2017
// 1.6 lab - Create a MonsterStruct with each of the characteristics of a monster.  Use that struct to create 4 different monster objects.

#include <iostream>
#include <string>
using namespace std;

struct MonsterStruct {
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
};

int main()
{
 
    MonsterStruct monster1;
    
        monster1.name = "MonsterOne";
        monster1.head = "Zombus";
        monster1.eyes = "Spritem";
        monster1.ears = "Vegitas";
        monster1.nose = "None";
        monster1.mouth = "Wackus";
    
    MonsterStruct monster2;
    
        monster2.name = "Blade" ;
        monster2.head = "Zombus";
        monster2.eyes = "Spritem";
        monster2.ears = "Spritem";
        monster2.nose = "Wackus";
        monster2.mouth = "Spritem";
    
    MonsterStruct monster3;
    
        monster3.name = "";
        monster3.head = "";
        monster3.eyes = "";
        monster3.ears = "";
        monster3.nose = "";
        monster3.mouth = "";
        
    MonsterStruct monster4;
    
        monster4.name = "";
        monster4.head = "";
        monster4.eyes = "";
        monster4.ears = "";
        monster4.nose = "";
        monster4.mouth = "";
        
    cout<<"Here's some monsters I have already made for you: "
        <<endl
        <<endl
        <<monster1.name<<": "
        <<monster1.head<<", "
        <<monster1.eyes<<", "
        <<monster1.ears<<", "
        <<monster1.nose<<", "
        <<monster1.mouth
        <<endl
        <<monster2.name<<": "
        <<monster2.head<<", "
        <<monster2.eyes<<", "
        <<monster2.ears<<", "
        <<monster2.nose<<", "
        <<monster2.mouth
        <<endl
        <<endl;
        
    cout<<"Now you get to make your own monster."
        <<endl
        <<"First, what type of head? (Zombus, Franken, Happy): ";
    cin>>monster3.head;
    cout<<endl;
    cout<<"Perfect, now for the eyes (Vegitas, Wackus, Spritem): ";
    cin>>monster3.eyes;
    cout<<endl;
    cout<<"Now the ears (Vegitas, Wackus, Spritem): ";
    cin>>monster3.ears;
    cout<<endl;
    cout<<"Nose? (Vegitas, Wackus, Spritem, None): ";
    cin>>monster3.nose;
    cout<<endl;
    cout<<"And a mouth (Vegitas, Wackus, Spritem): ";
    cin>>monster3.mouth;
    cout<<endl;
    cout<<"Lastly, give it a name: ";
    cin>>monster3.name;
    
    cout<<endl
        <<"Cool! Here's your monster: "
        <<endl
        <<endl
        <<monster3.name<<": "
        <<monster3.head<<", "
        <<monster3.eyes<<", "
        <<monster3.ears<<", "
        <<monster3.nose<<", "
        <<monster3.mouth
        <<endl
        <<endl;
    cout<<"Let's make one more monster. You know the drill."<<endl;
    
    cout<<"Head? (Zombus, Franken, Happy): ";
    cin>>monster4.head;
    cout<<endl;
    cout<<"Eyes? (Vegitas, Wackus, Spritem): ";
    cin>>monster4.eyes;
    cout<<endl;
    cout<<"Ears? (Vegitas, Wackus, Spritem): ";
    cin>>monster4.ears;
    cout<<endl;
    cout<<"Nose? (Vegitas, Wackus, Spritem, None): ";
    cin>>monster4.nose;
    cout<<endl;
    cout<<"Mouth? (Vegitas, Wackus, Spritem): ";
    cin>>monster4.mouth;
    cout<<endl;
    cout<<"Name: ";
    cin>>monster4.name;
    
    cout<<endl
        <<"Here's that monster: "
        <<endl
        <<endl
        <<monster4.name<<": "
        <<monster4.head<<", "
        <<monster4.eyes<<", "
        <<monster4.ears<<", "
        <<monster4.nose<<", "
        <<monster4.mouth
        <<endl
        <<endl;
        
    cout<<"------------------------------------------------------------------------"
        <<endl
        <<endl;
        
    cout<<"Here are all four (4) monsters that I created and you created: "
        <<endl
        <<endl
        <<monster1.name<<": "
        <<monster1.head<<", "
        <<monster1.eyes<<", "
        <<monster1.ears<<", "
        <<monster1.nose<<", "
        <<monster1.mouth
        <<endl
        <<endl
        <<monster2.name<<": "
        <<monster2.head<<", "
        <<monster2.eyes<<", "
        <<monster2.ears<<", "
        <<monster2.nose<<", "
        <<monster2.mouth
        <<endl
        <<endl
        <<monster3.name<<": "
        <<monster3.head<<", "
        <<monster3.eyes<<", "
        <<monster3.ears<<", "
        <<monster3.nose<<", "
        <<monster3.mouth
        <<endl
        <<endl
        <<monster4.name<<": "
        <<monster4.head<<", "
        <<monster4.eyes<<", "
        <<monster4.ears<<", "
        <<monster4.nose<<", "
        <<monster4.mouth
        <<endl
        <<endl;
        
    cout<<"Those are some good monsters."<<endl;
    
    return 0;
        
}