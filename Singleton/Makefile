#LDFLAGS = -lhiredis -lpthread -lm -lstreamhtmlparser
LDFLAGS = 
LIB = 
OBJECTS = patten.o singleton.o



all: singleton 
singleton : ${OBJECTS}
	g++ -o  singleton -g ${OBJECTS} ${LDFLAGS} 

patten.o:patten.cpp
	g++ -c -g patten.cpp

singleton.o:singleton.cpp
	g++ -c -g singleton.cpp

.PHONY:clean

clean:
	rm -f *.o singleton 
