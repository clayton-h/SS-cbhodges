# This is a Makefile for the StackOverflowHW project
# By: Clayton Hodges

# Define Makefile variables and compiler flags
# To use a Makefile variable later in the makefile, use $()
#
# -g adds debugging info to the executable
# -Wall turns on most but not all warnings
# -m32 compiles the program as a 32-bit x86 binary
# -fno-stack-protector disables stack protection mechanisms like canaries

CC = g++
CFLAGS = -g -Wall -m32 -fno-stack-protector
PROGRAM = StackOverflowHW
CPPFILES = StackOverflowHW.cpp
OBJECTS = $(CPPFILES:.cpp=.o)

# Typing 'make' will invoke the first target entry in the file
# (in this case the default entry)
# You can name this target any name, but "default" or "all" are common practices

default: $(PROGRAM)

# Build object files to create the executable

$(PROGRAM): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJECTS)

# Create the object file from the source files

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# To start over from scratch, type 'make clean' to remove all object files and executables
# and backups, backups are sometimes hidden and look like *~

clean:
	$(RM) $(PROGRAM) *.o *~

# Add a 'run' target to execute the program

run:
	./$(PROGRAM)
