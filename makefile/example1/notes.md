
# compile them seperately without linking
gcc -c geometry.c -> geometry.o
gcc -c double_lib.c -> double_lib.o

# link the object files together now
gcc geometry.o double_lib.o -l m -o exe -> exe

-l m -> for math.h binaries linking
