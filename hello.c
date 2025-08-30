#include <stdio.h>

// The .h in the end is stands for Header. Header files are libraries.
/* 
stdio.h -> Standart I/O Header File: Even the smallest functions are inside this library.

*/ 

// The Format Codes: 
/* 
If we want to insert a variable inside a prompt that will be prompted to the screen we have to use Format Codes.

%s -> If we are going to use a string variable after
%d -> For integer

*/

int main(void) {
    printf("Hello, World!\n");

    char name[50]; 
    printf("Name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

// **********************

    int x, y;
    printf("Please provide 2 numbers to compare them.\n");
    printf("Number 1: ");
    scanf("%d", &x);
    printf("Number 2: ");
    scanf("%d", &y);

    if (x != NULL && y != NULL) {
    if(x < y) {
        printf("%d is celarly lesser than %d!\n", x, y);
    }
    else if (x > y) {
        printf("%d is clearly greater than %d!\n", x, y);
    } 
    else {
        printf("They are equal.\n");
    }
    } else {
        printf("Please provide the numbers!\n");
    }

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


