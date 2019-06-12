all: Driver.o Node341.o List341.o Stack341.o Queue341.o 
	g++ -Wall Driver.o Node341.o List341.o Stack341.o Queue341.o -o driver.out

Node341.o: Node341.cpp 
	g++ -Wall -c Node341.cpp

List341.o: List341.cpp 
	g++ -Wall -c List341.cpp

Stack341.o: Stack341.cpp 
	g++ -Wall -c Stack341.cpp

Queue341.o: Queue341.cpp 
	g++ -Wall -c Queue341.cpp

Driver.o: Driver.cpp
	g++ -Wall -c Driver.cpp

clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~ *.h.gch *#

val:
	valgrind ./driver.out


run:
	./driver.out


