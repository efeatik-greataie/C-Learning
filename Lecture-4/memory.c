#include <stdio.h>
#include <stdlib.h>

int main(void) {
        int *i = malloc(10 * sizeof(int));

        for(int n = 0, a = sizeof(i); n < a; n++) scanf("%i", (i + n));

        
}
