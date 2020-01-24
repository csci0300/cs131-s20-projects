CC=gcc
CFLAGS = -std=gnu11 -Wall -g -fsanitize=address
LDFLAGS = -lm
TESTS = run_tests
TEST_BUILTIN = run_builtin_tests

STRING_OBJS = strings.o
STRING_DEP = strings_tests.o test_runner.o
BUILTIN_OBJS = strings_tests_built.o test_runner_built.o
OBJS_ALL = $(STRING_OBJS) $(STRING_DEP) $(BUILTIN_OBJS)

FILES = strings.h strings.c

#creates all executables
all: $(TESTS) $(TEST_BUILTIN)

#runs the tests
check: $(TESTS)
	./run_tests all

#formats the strings.c and strings.h files
format:
	clang-format -style=Google -i $(FILES)

#compiles all .c files into .o files using the no builtin flag
%.o: %.c
	$(CC) $(CFLAGS) -fno-builtin -c $< -o $@

#creates the run_tests executable which links your string functions to the test_runner
$(TESTS): $(STRING_OBJS) $(STRING_DEP)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

#creates the run_builtin_tests which runs tests against the standard library
$(TEST_BUILTIN): $(STRING_DEP)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

#removes all executables and object files
clean:
	rm -f $(TESTS) $(TEST_BUILTIN) $(OBJS_ALL)
