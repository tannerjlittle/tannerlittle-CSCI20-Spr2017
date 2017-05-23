#include "main.h"

int main(){
	string fileName;
	string fileName2;
	fileName="people.txt";
	fileName2="relation.txt";
	int n;
	char **relation;
	if((n=size(fileName))==-1)
		return 0;
	Person *p=new Person[n];
	finFin(p,fileName);
	display2(n,p);
	int ch=0;
	while(ch!=-1){
		menu();
		cin>>ch;
		if(ch==-1)
			break;
		else if(ch==1){
		p=add(p,n,fileName);
		display2(n,p);
		}
		else if(ch==2){
			save(p,n,fileName);
		}
		else if(ch==3){
			relation=makeRelation(p,n,fileName2);
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)
					cout<<relation[i][j]<<" ";
				cout<<"\n";
			}
		}
		else if(ch==4){
			relationTree(p,n,fileName,relation);
		}
		else if(ch==5){
			relation=loadRelation(n,fileName2);

		}

	}

	return 0;
}