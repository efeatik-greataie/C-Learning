#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
        int n = 30;
        int *p = &n;

        printf("%p\n", p);
        printf("%i\n", *p);

        printf("s: "); char *s = malloc(20 * sizeof(char)); scanf("%s", s); 
        printf("t: "); char *t = malloc(20 * sizeof(char)); scanf("%s", t);

        if(strlen(s) == strlen(t)) {
                for(int i = 0, n = strlen(s); i <= n; i++) {
                        if(i == n) {
                                printf("Same!");
                                return 0;
                        }
                }
                printf("Different!");
        } else printf("Different!");
        
}
