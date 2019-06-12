all: driver.o Country.o Continent.o 
	g++ -Wall driver.o Country.o Continent.o -o output.out

Country.o: Country.cpp Country.h
	g++ -Wall -c Country.cpp

Continent.o: Continent.cpp Continent.h
	g++ -Wall -c Continent.cpp

driver.o: driver.cpp
	g++ -Wall -c driver.cpp

clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~ *.h.gch *#
val:
	valgrind ./output.out


run:
	./output.out
