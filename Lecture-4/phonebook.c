#include <stdio.h>
#include <stdlib.h> 

void add(FILE *file, char *name, char *number);

int main(void) {
        FILE *file;
        file = fopen("phonebook.csv", "a");
        char *name = malloc(50 * sizeof(char));
        char *number = malloc(50 * sizeof(char));
        
        add(file, name, number);

}

void add(FILE *file, char *name, char *number) {
        printf("Name: "); scanf("%s", name); 
        printf("Number: "); scanf("%s", number); 

        fprintf(file, "%s, %s\n", name, number);

        fclose(file);
}
