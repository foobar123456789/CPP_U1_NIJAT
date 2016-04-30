all: catch.hpp Linked_list.o Queue.o get_prize.o

catch.hpp:
	cp ../a1/catch.hpp ./

Linked_list.o:
	cp ../a2/Linked_list.cpp ./
	cp ../a2/Linked_list.hpp ./
	g++ -c Linked_list.cpp

Queue.o: Linked_list.o
	cp ../a3/Queue.cpp ./
	cp ../a3/Queue.hpp ./
	g++ -c Queue.cpp

get_prize.o: get_prize.hpp get_prize.cpp
	g++ -c get_prize.cpp

tests: tests.exe
	./tests.exe

tests.exe: get_prize.o Linked_list.o Queue.o tests.o
	g++ -o tests.exe tests.o get_prize.o Queue.o Linked_list.o

tests.o: catch.hpp tests.cpp
	g++ -c tests.cpp

clean:
	rm -f Linked_list.o
	rm -f Linked_list.cpp
	rm -f Linked_list.hpp
	rm -f Queue.o
	rm -f Queue.hpp
	rm -f Queue.cpp
	rm -f get_prize.o
	rm -f tests.o
	rm -f tests.exe
	rm -f catch.hpp

