#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

double resolve[1] =  {0};

void get_operation(double resolve[]);
double add_score(double resolve[]);
double remove_score(double resolve[]);


int main(int argc, char *argv[]) {
        if(argc == 1) {
                printf("Welcome to the Score program! This program helps you calculate your scores' average in case you are incapable of that! \n");
                printf("You can also use the program with arguments. Please run the program with -help argument to get help about that! \n");
                //get_operations 
                
        } else if (strcmp(argv[1], "-help") == 0 || strcmp(argv[1], "help") == 0 || strcmp(argv[1], "-h") == 0) {

                printf("Welcome to the fast use of the program! If you want to access it's cool menu design directly, run it without any arguments. \n");
                printf("If you want to use the program with arguments, please provide the scores with gaps between them. And please do not enter non-integer value. Program is now incapable of protecting itself from this situation. So it will suffer. Do not make it suffer, after all it's here to help you. Somehow. \n");

        } else {
                long a = 0;
                for(int x = 0; x < argc; x++) {
                        a = a + strtol(argv[x], NULL, 10);
                }
                printf("%li \n", a / (long) (argc - 1.0));
                return 0;
        }
}

void get_operation(double resolve[]) {

}
