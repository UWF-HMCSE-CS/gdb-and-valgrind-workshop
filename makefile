CC= g++

CXXFLAGS= -std=c++11 -g -Wall

OBJECTS = account.o
HEADERS := $(shell find . -path ./test -prune -o -name "*.hpp" -print)

main: main.o $(OBJECTS)
	$(CC) $(CXXFLAGS) -o $@ $^

$(OBJECTS): $(HEADERS)

valgrind: clean main
	valgrind ./main

clean:
	$(RM) *.o *.gch core main