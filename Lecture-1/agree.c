#include <stdio.h>
#include <stdbool.h>

void meow(int n);
int get_positive_int(void);
bool get_answer(void);

// In C functions the pre-defination of a function indicates the output of the function if there is any. In this case, function meow does not have any output but will have some input whis is pinpointed in the paranthesis.

int main(void) {

        if (get_answer() == true) {
                meow(get_positive_int());
        } else {
                return 0;
        }
}

bool get_answer(void) {
        char c;
        do {
                printf("Do you want the cat to meow for you? (y/N) \n");
                scanf(" %c", &c);
        } 
        while(c != 'y' && c != 'Y' && c != 'n' && c != 'N');

        if(c == 'y' || c == 'Y') {
                return true;
        } else {
                return false;
        }

}
 
int get_positive_int(void) {
        int x;
        printf("Please enter how many times you want the cat to meow for you: \n");
        do {
                printf("Number: ");
                scanf("%d", &x);
        }
        while(x < 1);
        return x;      
}

void meow(int n) {

        for(int i = 0; i < n; i++) {
                printf("Meow!\n");

        }
}
