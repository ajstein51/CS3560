CXXFLAGS = -Wall -c
all: build 

#build
build: collegemain.o college.o course.o
	g++ collegemain.o college.o course.o -o main

collegemain.o: collegemain.cc
	g++ $(CXXFLAGS) collegemain.cc

college.o: college.cc
	g++ $(CXXFLAGS) college.cc

course.o: course.cc
	g++ $(CXXFLAGS) course.cc

# Test Case:
testcollege.o:
	g++ $(CXXFLAGS) -std=c++11 testcollege.cc -o testcollege.o

testcollege: testcollege.o course.o college.o 
	g++ -o testcollege testcollege.o course.o college.o 

runtest: testcollege
	./testcollege

test: build runtest

# deletes
clean:
	-rm -rf *.o main testcollege

