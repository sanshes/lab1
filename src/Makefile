CXX = g++
CXXFLAGS = -Wall -Wextra -O2
TARGET = main
SRC = main.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.0: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
	
.PHONY: clean

clean:
	rm -f $(TARGET)
