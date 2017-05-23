# makefile for final assignment

# name of executable file
all: assignmentfinal

# creates the executable from all the object files
assignmentfinal: main.o class.o functions.o
	g++ -Wall -g -o assignmentfinal.exe main.o class.o functions.o
	
# creates the final object file
main: main.cpp  
	g++ -Wall -g -c main.cpp
	
# creates the unit test object file for class
class: class.cpp 
	g++ -Wall -g -c class.cpp

# creates the unit test object file for functions
functions: functions.cpp
	g++ -Wall -g -c -std=gnu++0x functions.cpp