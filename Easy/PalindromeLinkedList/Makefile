.PHONY : test clean
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
GTEST_FLAGS = -lgtest_main -pthread -lgtest

test: clean
	@$(CXX) $(CXXFLAGS) $(GTEST_FLAGS) -g test.cc -o test
	@./test

clean:
	@rm -rf test
	@echo "Clean complete."