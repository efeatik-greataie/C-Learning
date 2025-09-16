#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
        char *s = malloc(50 * sizeof(char)); 
        printf("s: "); 
        scanf("%49s", s);

        char *t = malloc(strlen(s) + 1);

        for(int i = 0, n = strlen(s); i <= n; i++) {
                *(t + i) = *(s + i); 
        }

        *t = toupper(*t);

        printf("s: %s, t: %s. \n", s, t);
        
        free(t);
        free(s);
}
