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

// *****************************


// Escaping in C: When to escape some effect that computer will get confused when see it,
// We use the backslash "\" to escape an effect.
/*
\n -> Stands for escape to the next line
\r -> Moves the cursor to the beginning of the line except the end of it.
\" -> There for to use when need to use "" in a "" prompted argument.
\' -> Same but for '' 
\\ -> If you want to print a literal backslash somehow you have to use "\\"
*/

// **************************

/* 
Constant variables are remains constant if you even try to change them.
I can make any variable constant as adding the word "const" before it's type.


const int i = 10;

for example..
*/

/* 

Integer Overflow: Variables like Integer and Float are assigned to store 32bits of data. And because of that when they try to store more than capacity of 32bits everything is just messed up. Typically computer tries to allocate the 33th bit and the rest 32 bits assigned to 0 and output becomes 0. But that is not the case every time. It's not predictable. 

This is also a problem that history has paniced about. They somehow had to even reboot planes to prevent them to overflow and crash. Because when something like that happened it turns out that when they try to store the flying time inside planes softwares they used 32bits integers to keep track of seconds. And that caused the plane to crash.

It was also the PacMan's problem because they assume that nobody can reach above level 255. And because they used 8bits to store that value and didn't implemented an Final to the game, the game just went out of control.

Float-Point Inprecision: Same thing happens when we try to use float numbers. Things after the . is going crazy and wrong if we try to reach above 32bits again. And that can happen with a single 'printf("%.50f", float);' command. The .50 part forces computer to calculate 50 decimal places. And it can't store that much information and just messes up. And that creates an imprecision.

There can be solutions to allocate 64bits to numbers. These are long and double. Long is 64bit version of the Integer and Double is 64bit version of Float. 

But it's still a problem to handle if something overflows or not in computing. But it can be averted through good design.

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


