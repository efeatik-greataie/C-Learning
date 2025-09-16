#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void) {
        int *a = malloc(sizeof(int)); *a = 42;
        int *b = malloc(sizeof(int)); *b = 53; 

        printf("Current values: \n");
        printf("a: %d, b: %d. \n", *a, *b);

        swap(a, b);
        printf("Values after swap function: \n");
        printf("a: %d, b: %d.\n", *a, *b);
}

void swap(int *a, int *b) {
        int tmp = *a;

        *a = *b;
        *b = tmp;
}
