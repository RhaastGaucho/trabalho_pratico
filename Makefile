primo: primo.cpp
	g++ primo.cpp -o primo

matriz: matriz.cpp
	g++ matriz.cpp -o matriz

vetor: vetor.cpp
	g++ vetor.cpp -o vetor

all: primo matriz vetor

run-primo: primo
	./primo

run-matriz: matriz
	./matriz

run-vetor: vetor
	./vetor

run-all: all
	./primo
	./matriz
	./vetor