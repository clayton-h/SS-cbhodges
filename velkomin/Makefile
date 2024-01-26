#This is a Makefile for ALL projects: it will build and can clean the build repository
#By: Clayton Hodges

#define Makefile variables and compiler flags
#to use a Makefile variable later in the makefile use $()
#
#-g adds debugging info to the executable
#-Wall turns on most but not all warnings

CC = g++
CFLAGS = -g -Wall
PROGRAM = classExample
CPPFILES = velkomin.cpp
HEADERS = ~
OBJECTS = velkomin.o

#typing 'make' will invoke the first target entry in the file
#(in this case the default entry)
#you can name this target any name, but "default" or "all" are the common practice

default: $(PROGRAM)

#build object files to create the executable

$(PROGRAM): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJECTS)

#create the object file from the source files

object: $(CPPFILES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(CPPFILES)

#to start over from scratch type 'make clean' to remove all object files and executables
#and backups, backups are sometimes hidden and look like *~

clean:
	$(RM) $(PROGRAM) *.o *~

run:
	./$(PROGRAM)
