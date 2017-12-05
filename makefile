CXX := g++
CXXFLAGS := -std=c++11
DEST = /usr/local/bin

all: clean $(patsubst %.cpp, %.out, $(wildcard day*.cpp))

%.out: %.cpp makefile
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $< -o $@

clean:
	rm -fv *.out
