flex.out: main.o flex.o
	g++ flex.o main.o -o flex.out
	
flex.o: flex.h flex.cpp
	g++ -c flex.cpp
	
main.o: flex.h main.cpp
	g++ -c main.cpp
	
clean:
	rm *.o *.out