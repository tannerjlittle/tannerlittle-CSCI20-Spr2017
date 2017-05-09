# makefile for lab 52

# name of executable file
all: lab52

# creates the executable from both the object files
lab52: main.o class.o 
	g++ -Wall -g -o lab52 main.o class.o
	
# creates the lab object file
main: main.cpp  
	g++ -Wall -g -c main.cpp
	
# creates the unit test object file
class: class.cpp 
	g++ -Wall -g -c class.cpp