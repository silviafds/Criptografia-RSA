all: definicaoPrimos.o main.o
	g++ -o main definicaoPrimos.o main.o

definicaoPrimos.o: definicaoPrimos.cpp definicaoPrimos.h
	g++ -c definicaoPrimos.cpp

main.o: main.cpp definicaoPrimos.h
	g++ -c main.cpp

clean: 
	rm -rf *.o

src: 
	./main