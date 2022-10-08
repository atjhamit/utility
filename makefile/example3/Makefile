# -*- Makefile -*-

all: geom tip

geom: geometry.o double_lib.o
	gcc geometry.o double_lib.o -l m -o geom

geometry.o: geometry.c double_lib.h
	gcc -c geometry.c

double_lib.o: double_lib.c
	gcc -c double_lib.c

tip: calc_tip.o double_lib.o
	gcc calc_tip.o double_lib.o -o tip

calc_tip.o: calc_tip.c double_lib.h
	gcc -c calc_tip.c

clean:
	rm -f *.o geom tip
