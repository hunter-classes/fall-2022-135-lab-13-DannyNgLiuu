main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: tests.cpp funcs.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main tests main.o tests.o funcs.o