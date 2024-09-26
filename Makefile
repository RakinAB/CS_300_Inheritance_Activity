demo: main.o animal.o shelter.o
	g++ main.o animal.o shelter.o  -o demo

main.o: main.cpp animal.h shelter.h
	g++ -c main.cpp

animal.o: animal.cpp animal.h
	g++ -c animal.cpp

shelter.o: shelter.cpp shelter.h
	g++ -c shelter.cpp

run: demo
	./demo