CXX=g++
CXXFLAGS=-std=c++11 -fPIC -O2
LDFLAGS=-shared

all: libsparrow.so p1

libsparrow.so: sparrow.cpp sparrow.h
        $(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ sparrow.cpp

p1: p1.cpp libsparrow.so
        $(CXX) $(CXXFLAGS) -o $@ p1.cpp -L. -lsparrow -Wl,-rpath=.

clean:
        rm -f *.so p1 *.o
