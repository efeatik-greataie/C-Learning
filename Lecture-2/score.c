#include <stdio.h> 
#include <string.h>

void get_score(void);
void get_operation(void);
double get_result(double scores[]);
void remove_score(void);

int n = 4;
double scores[];

int main(void) {
        printf("Welcome to the score calculator app! This CLI app helps you calculate your average score! \n");


}

void get_operation(void) {
        int x;
        printf("Please select what you want to do: \n");
        printf("1: Add Score, 2: Remove Score, 3: Proceed to calculation.");
        scanf("%d", &x);

        if(x < 4 && x > 0) {
                switch (x) {
                        case 1: get_score(); break;
                        case 2: printf("Not ready yet!"); get_operation(); break;
                        case 3: get_result(scores); break;
                }
        }

}

void get_score(void) {
        // This function will get user input and then add the given number to the array that stores all the scores. 
        // Will prompting for input until "q" is returned by the user. 
        
        while(1) {
                int i;
                printf("Number: ");
                if(scanf("%d \n", &i) != NULL) {
                        
                }
        }

}

void remove_score(void) {

}

double get_result(double scores[n]) {
        return n;
}
