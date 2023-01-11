all: ola.o main.o
	g++ -o main ola.o main.o

ola.o: ola.cpp ola.hpp
	g++ -c ola.cpp

main.o: main.cpp ola.hpp
	g++ -c main.cpp

clean: 
	rm -rf *.o

src: 
	./main