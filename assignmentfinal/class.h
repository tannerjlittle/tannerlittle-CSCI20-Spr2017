#include<string>
#ifndef PERSON
#define PERSON

using namespace std;

class Person{
	private:
		string name;
		int age;
		int yob;	//year of birth
		string alive;
	
	public:
		Person();
	
		Person(string name,int age,int yob,bool alive);
	
		void setName(string name);
	
		string getName();
	
		void setAge();
	
		int getAge();
		
		void setYob(int yob);
	
		int getYob();
	
		void setAlive(string alive);
	
		string getAlive();
	
		void display();
	
		friend void display2(int n,Person *p);
	};


#endif