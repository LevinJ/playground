#http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
SOURCES=ExamineObjecgt.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm -f $(EXECUTABLE)
	rm -f $(OBJECTS)