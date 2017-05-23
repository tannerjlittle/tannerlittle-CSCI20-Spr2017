#include<string>
#include "class.h"
#ifndef FUNCTIONS
#define FUNCTIONS

using namespace std;

int size(string fileName);

void finFin(Person *p, string fileName);

void menu();

Person* add(Person *p,int &n, string fileName);

void save(Person *p,int n, string fileName);

char** makeRelation(Person *p,int n, string fileName2);

void relationTree(Person *p,int n, string fileName, char** relation);

int oldest(Person *p,int n);

void nextgen(Person *p,int n,char** relation,int x,int y,int &g);

char** loadRelation(int n, string fileName2);

void printRelation(char** relation);

#endif