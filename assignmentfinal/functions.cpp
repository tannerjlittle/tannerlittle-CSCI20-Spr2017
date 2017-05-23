#include "functions.h"
#include "class.h"
#include <iostream>
#include <string>
#include <fstream>

int size(string fileName){ //filename
	ifstream fin(fileName.c_str());
	if(!fin)
		return -1;
	int size=0;
	string temp;
	while(!fin.eof()){
		fin>>temp>>temp>>temp;
		size++;
	}
	cout<<size<<" people documented.\n";
	fin.close();
	return size;
}

void finFin(Person *p, string fileName){ //filename
	ifstream fin(fileName.c_str());
	int i=0;
	string name,alive;
	int yob;
	while(!fin.eof()){
		fin>>name>>yob>>alive;
		p[i].setName(name);
		p[i].setYob(yob);
		p[i].setAge();
		p[i].setAlive(alive);
		i++;
	}
	fin.close();
}

void menu(){
	cout<<"Select option: \n";
	cout<<"1-Add Person.\n";
	cout<<"2-Save changes.\n";
	cout<<"3-Relation.\n";
	cout<<"4-Relation tree.\n";
	cout<<"5-Load Relation.\n";
}

Person* add(Person *p,int &n, string fileName){ //filename
	Person *temp=new Person[n+1];
	for(int i=0;i<n;i++){
		temp[i].setName(p[i].getName());
		temp[i].setYob(p[i].getYob());
		temp[i].setAge();
		temp[i].setAlive(p[i].getAlive());
	}
	//temp=p;
	string name,alive;
	int yob;
	cout<<"Name of new person: ";
	cin>>name;
	temp[n].setName(name);
	cout<<"Year of Birth: ";
	cin>>yob;
	temp[n].setYob(yob);
	temp[n].setAge();
	cout<<"Type 'Alive' or 'Dead': ";
	cin>>alive;
	if(alive=="Alive")
		temp[n].setAlive(alive);
	else if(alive=="Dead")
		temp[n].setAlive(alive);
	else
		temp[n].setAlive("Null");
	p=nullptr;
	n=n+1;
	cout<<"Added.\n";
	return temp;	
}

void save(Person *p,int n, string fileName){ //filename
	ofstream fout(fileName.c_str());

	for(int i=0;i<n;i++)
		fout<<p[i].getName()<<" "<<p[i].getYob()<<" "<<p[i].getAlive()<<"\n";
	
	cout<<"Saved.\n";
	fout.close();
}

char** makeRelation(Person *p,int n, string fileName2){ //filename
	char **relation;
	int **matrix;	//For General Relation
	char r='\0';
	relation=new char *[n];
	matrix=new int *[n];
	for(int i=0;i<n;i++){
		relation[i]=new char [n];
		matrix[i]=new int [n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matrix[i][j]=0;
			relation[i][j]='x';
		}
	}
	cout<<"Specify how by typing S, B, M, F, P,or N for sister, brother, mother, father, parent,and NOT RELATED\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)
				goto end;
			cout<<"How is "<<p[i].getName()<<" related to "<<p[j].getName()<<" ? :";
			
				
			cin>>r;
			if(r=='p' ){
				matrix[i][j]=1;
				relation[i][j]='P';
				
			}
			if(r=='n' || r=='N'){
				cout<<"> ";
				matrix[i][j]=0;
				relation[i][j]='N';
			}

			else if(r=='S' || r=='s'){
				matrix[i][j]=1;
				relation[i][j]='S';
			}

			else if(r=='B' || r=='b'){
				matrix[i][j]=1;
				relation[i][j]='B';
			}

			else if(r=='M' || r=='m'){
				matrix[i][j]=1;
				relation[i][j]='M';
			}

			else if(r=='F' || r=='f'){
				matrix[i][j]=1;
				relation[i][j]='F';
				
			}

			
end:
			;
		}
	}

	return relation;
}

void relationTree(Person *p,int n, string fileName, char** relation){ //filename
	int g=0;
	int old=oldest(p,n);
	cout<<old;
	cout<<"\n"<<p[old].getName()<<":\n";
	for(int i=0;i<n;i++)
		if(relation[i][old]=='M' || relation[i][old]=='F'){
			cout<<"\t"<<p[i].getName()<<":";
			for(int j=0;j<n;j++){
				if(relation[i][j]=='P'){
					nextgen(p,n,relation,i,j,g);
				}
			}
			cout<<"\n";
		}
	cout<<"\n";
}

void nextgen(Person *p,int n,char** relation,int x,int y,int &g){
	if(relation[y][x]=='M'||relation[y][x]=='F'){
		cout<<"\n";
		for(int i=0;i<g;i++)
			cout<<"\t";
		cout<<"\t\t"<<p[y].getName()<<":\n";
	}
	for(int i=0;i<n;i++)
		if(relation[y][i]=='P'){
			cout<<"\t";
			g++;
			nextgen(p,n,relation,y,i,g);
		}
}

int oldest(Person *p,int n){
	int found=0;
	int max=0;
	for(int i=0;i<n;i++)
		if(p[i].getAge()>max){
			max=p[i].getAge();
			found=i;
		}
	return found;
}

char** loadRelation(int n, string fileName2){ //filename
	char **relation;
	relation=new char *[n];
	for(int i=0;i<n;i++)
		relation[i]=new char[n];
	ifstream fin(fileName2.c_str());

	if(!fin)
		return nullptr;
	int x=0;
	char *a=new char[n*n];
	while(!fin.eof()){
		fin>>a[x];
		x++;
	}
	x=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			relation[i][j]=a[x];
			x++;
		}
	}
	fin.close();
	return relation;
}
