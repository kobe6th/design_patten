#LDFLAGS = -lhiredis -lpthread -lm -lstreamhtmlparser
LDFLAGS = 
LIB = 
OBJECTS = patten.o factory.o product.o



all: factory 
factory : ${OBJECTS}
	g++ -o  factory -g ${OBJECTS} ${LDFLAGS} 

patten.o:patten.cpp
	g++ -c -g patten.cpp

factory.o:factory.cpp
	g++ -c -g factory.cpp

product.o:product.cpp
	g++ -c -g product.cpp

.PHONY:clean

clean:
	rm -f *.o factory 
