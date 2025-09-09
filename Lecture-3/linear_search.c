#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
        int array[] = {20, 10, 100, 23, 11, 45, 10};

        int x;
        if(argc == 2) {
                x = strtol(argv[1], NULL, 10); 
        } else {
                printf("Please provide the number you want to search up for: ");
                scanf("%di", &x);
        }

        for(int i = 0; i < 7; i++) {
                if(x == array[i]) {
                        printf("Found! %d is inside the array with index of %d! \n", x, i);
                        return 0;
                } 
        }

        printf("%d is not found in the array. \n", x);
        printf("Here's the numbers in array: \n");
        
        for(int i = 0; i < 7; i++)  {
                printf("%d ", array[i]);
        }
        printf("\n");
        return 1; 
}
