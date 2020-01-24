FLAGS = -g3 -Wall -Wextra -Wconversion -Werror -Wno-error=unused-parameter -Wcast-align -g -fsanitize=address
CFLAGS = -std=gnu11 $(FLAGS)
CXXFLAGS = -std=gnu++17 $(FLAGS)
FILES = vector131.h vector131.c

.PHONY: all clean check format

#creates all executables
all: testsuite

#formats files that may be edited
format:
	clang-format -style=Google -i $(FILES)

#command to run the tests
check: testsuite
	./testsuite

#creates an executable for the testsuite, linking the vector object file
testsuite: tests.cc vector131.o
	$(CXX) $(CXXFLAGS) $^ -o $@

#creates an object files from a the vector131.c and h files
vector131.o: vector131.c vector131.h
	$(CC) $(CFLAGS) -c $^

#removes executables and object files
clean:
	rm -f testsuite vector131.o
