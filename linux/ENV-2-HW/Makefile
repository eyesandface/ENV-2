all: env2

env2: complexNumber.o hw2.o sorting.o
	g++ complexNumber.o hw2.o sorting.o -o env2

complexNumber.o: complexNumber.cpp
	g++ -c complexNumber.cpp

hw2.o: hw2.cpp
	g++ -c hw2.cpp

sorting.o: sorting.cpp
	g++ -c sorting.cpp

clean:
	rm -rf *.o env2
