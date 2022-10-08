
Steps from code to executable

    .c file ->  preprocessor(handles #include, #define, strips out comments, etc.); invoked using -E (gcc file.c -E) -> 

    expanded .c file -> compiler (translates c to assembly); invoked using -S (gcc file.c -S); outputs .s file ->

    .s file -> assembler (tranlates assembly to object file); invoked using -c (gcc file.c -c ); output .o file ->

    .o file -> linker (brings together object file(s) to produce executable; outputs executable file
