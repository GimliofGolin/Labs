#Eli Skoglund
#CPSC 1021
#03.08.23

all: main.out

run: main.out
	./main.out

main.out: main.cpp Date.cpp
	g++ -Wall main.cpp Date.cpp -o main.out

clean:
	rm -f -std=c++11 main.out