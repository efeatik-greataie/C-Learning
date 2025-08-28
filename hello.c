#include <stdio.h>

int main(void) {
    printf("Hello, World!\n\n\n");
}

// Escaping in C: When to escape some effect that computer will get confused when see it,
// We use the backslash "\" to escape an effect.
/*
\n -> Stands for escape to the next line
\r -> Moves the cursor to the beginning of the line except the end of it.
\" -> There for to use when need to use "" in a "" prompted argument.
\' -> Same but for '' 
\\ -> If you want to print a literal backslash somehow you have to use "\\"
*/
