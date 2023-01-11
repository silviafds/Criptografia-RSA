all: definicaoPrimos.o main.o
	g++ -o main definicaoPrimos.o main.o

definicaoPrimos.o: definicaoPrimos.cpp definicaoPrimos.hpp
	g++ -c definicaoPrimos.cpp

main.o: main.cpp definicaoPrimos.hpp
	g++ -c main.cpp

clean: 
	rm -rf *.o

src: 
	./main