gcc -c geometry.c
gcc -c double_lib.c
gcc -c calc_tip.c
gcc geometry.o double_lib.o -l m -o geo
gcc double_lib.o calc_tip.o -o tip
