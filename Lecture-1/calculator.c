#include <stdio.h>

double get_number(void);
double get_operation(double x, double y);

int main(void) {
        
        printf("Number 1: ");
        double x = get_number();
        printf("Number 2: ");
        double y = get_number();

        double z = get_operation(x, y);
        printf("Result: %lf \n", z);


}

double get_number(void) {
        double x;
        while(1) {
                if(scanf("%lf", &x) == 1) {
                        break;
                }
        }
        return x;
}

double get_operation(double x, double y) {
        printf("Please select the operation you want to apply. \n");
        printf("1: Multiply, 2: Sum, 3: Divide, 4: Substract \n"); 

        int o;

        do {
                printf("Operation: ");
                scanf(" %d", &o);
        } while (o <= 0 || o >= 5);
        

        double z;

        switch (o) {
                case 1: z = x * y; break;
                case 2: z = x + y; break;
                case 3: z = x / y; break;
                case 4: z = x - y; break;
        }
        return z;
}
