#include <stdio.h>

void brick_maker(int x, int y);
int get_number(void);

int main(void) {

        int x,y;
        printf("Please provide the x and y to generate a brick wall of your preference: \n");
        printf("x: ");
        x = get_number();
        printf("y: ");
        y = get_number();

        printf("\n");
        brick_maker(x, y);

        
}


void brick_maker(int x, int y) {
// A brick generator with 2 inputs: x and y. They represent the obvious actually. If you give x=3 and y=4 then it is just going to generate and 3x4 bricks.

        for (int i=0; i<y; i++) {
                for(int i=0; i < x; i++) {
                    printf("#");
                }
            printf("\n");
        }
}

int get_number(void) {

        int x;
        do {
                scanf("%d", &x);
        }
        while(x < 0);

        return x;
}
