#include <stdio.h>
#include <string.h>
#include <ctype.h> 

typedef char * string; // This is like a link to a command. It tells the compiler that when you see 'string' convert it to 'char *'

int main(int argc, char *argv[]) {
// Strings are actually array of chars in C. Compiler allocates continuous chars memories and adds '\0' (Thu NUL) at the end of the array. When Compiler prints out that string it starts from the first char and print all of them one by one untill encounters the '\0' then it stops and the string is completed. 

        char x[] = "deneme";  // Array of chars that contains a string.
        char *s = "deneme";   // A pointer that holds the address of the char that starts a string. 

// When we are declaring a string to Compiler, Compiler associates a memory in computer to that variable. So it needs specific value to allocate the memory to it. We can't just create a variable that will string (array of arrays of chars)  

        char *strings[5];     // Array of pointers each holds the address of their own string's starting char. At the end it's an array that holds 5 strings.
        char ss[5][10];       // Array of strings that holds 5 strings and each string holds 10 chars of maximum. 

        char *sss[5][10];      // This actually is array of 5x10=50 pointers that holds up address to the relevant (50 strings) of string's first char.  
}




