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

# deletes
clean:
	-rm -rf *.o main

