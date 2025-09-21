#Set Compiler to gcc
CC = gcc
#Set Target (Executable Name)
TARGET = terminate
#SET OPTS
OPT = -O0
#PREPROCESSOR FLAGS
DEPFLAGS = -MP -MD
#Set Src directory
SRCS = $(wildcard src/*)
#Set obj directory
OBJS = $(patsubst src/%.c,obj/%.o,$(SRCS))
#Set header/include directory
INCDIRS = ./include/
INCS = $(patsubst src/%.c,obj/%.d,$(SRCS))

#Define compiler flags
CFLAGS = -Wall -Wextra -g $(foreach HEADER,$(INCDIRS),-I$(HEADER)) $(OPT) $(DEPFLAGS)

#all requires target to be made first
all: $(TARGET)

#Target requires objs to be made first
#call gcc -o
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

#All .o files require corresponding .c files to be made first
#call gcc -(compiler flags) -c current.c -o current.o
obj/%.o:src/%.c
	$(CC) $(CFLAGS) -c $< -o $@
#The .c files are made by the text editor

#Define clean procedure
clean:
	rm -f $(OBJS) $(INCS) $(TARGET)
	echo "CLEANED"
