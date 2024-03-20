# Makefile
all: add-nbo

add-nbo: add-nbo.o add.o
	g++ -o add-nbo add-nbo.o add.o

add-nbo.o: add.h add-nbo.cpp

add.o: add.h add.cpp

clean:
	rm -f add-nbo
	rm -f *.o