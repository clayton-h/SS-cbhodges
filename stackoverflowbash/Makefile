# This is a Makefile for the StackOverflowHW project
# By: Clayton Hodges

# Define Makefile variables and compiler flags
# To use a Makefile variable later in the makefile, use $()
#
# -g adds debugging info to the executable
# -Wall turns on most but not all warnings
# -fno-stack-protector disables stack protection mechanisms like canaries
# -Wl,-z,execstack allows execution of code on the stack

CC = g++
CFLAGS = -g -m32 -Wall -no-pie -fno-stack-protector -z execstack
PROGRAM = StackOverflowHW
CPPFILES = StackOverflowHW.cpp
disable_aslr:
	@echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
OBJECTS = $(CPPFILES:.cpp=.o)

# Typing 'make' will invoke the first target entry in the file
# (in this case the default entry)
# You can name this target any name, but "default" or "all" are common practices

.PHONY: default clean run

default: disable_aslr $(PROGRAM)

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
