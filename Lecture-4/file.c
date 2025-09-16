#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add_person(FILE *file, char *name, char *number);

int main(void) {
        FILE *file = fopen("phonebook.csv", "a");
        char *name = malloc(50 * sizeof(char));
        char *number = malloc(50 * sizeof(char));
        char a;

        int *i = malloc(sizeof(int)); *i = 0;

        do {
                if(*i == 0) {
                        printf("Welcome! Please fill the form below to save your information! \n");
                        add_person(file, name, number);
                        *i = 1;
                } else if(*i == 1) {
                        printf("Do you save another person to the database? \n");
                        scanf("%c", &a);
                        if(a == 'n' || a == 'N') *i = 2;
                } else {
                        return 0;
                }
        } while(1);
       }

void add_person(FILE *file, char *name, char *number) {
        printf("Name: ");  scanf("%s", name);
        printf("Number: ");  scanf("%s", number);
        fprintf(file, "%s | %s \n", name, number);

        printf("%s added! \n", name);
        free(name); free(number);
        fclose(file);
}
