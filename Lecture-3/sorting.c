// The program will ask the user to select the sorting algorithm they want and work on a random generated array of integers with that algorithm then will keep track of the steps it takes and prints out the total steps it took to accomplish sorting. 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int bubble_sort(int *array);
int merge_sort(int *array);
int selection_sort(int *array);
int *randomize(void);
int help(int *array);

int n;
int *array;

typedef int (*sort_func)(int *array);

typedef struct {
        const char *name;
        sort_func function;
} Sort_Operation;

Sort_Operation operation[] = {
                {"bubble", bubble_sort},
                {"-b", bubble_sort},
                {"-bubble", bubble_sort},
                {"b", bubble_sort},
                {"selection", selection_sort},
                {"select", selection_sort},
                {"s", selection_sort},
                {"-s", selection_sort},
                {"-selection", selection_sort},
                {"-selecting", selection_sort},
                {"-select", selection_sort},
                {"merge", merge_sort},
                {"-merge", merge_sort},
                {"-m", merge_sort},
                {"m", merge_sort},
                {"help", help},
                {"-help", help},
                {"-h", help},
                {"h", help},
};

int main(int argc, char *argv[]) {
        // Creates an array of integers that holds up random values.
       
        if(argc == 1) {
                array = randomize();
                int o;
                do {
                printf("\nPlease select the sorting algorithm you want to apply to the array of random generated integers above: \n");
                printf("\n1: Selection Sorting, 2: Bubble Sorting, 3: Merge Sorting \n");
                o = scanf("%di", &o);

                if(o > 3 || o < 1) {
                        printf("Please provide an appropriate value!");
                } else {
                        break;
                        }
                } while(o > 3 || o < 1);

                switch (o) {
                        case 1: n = selection_sort(array); break; 
                        case 2: n = bubble_sort(array); break;
                        case 3: n = merge_sort(array); break;
                } 
                printf("It took %d steps to complete sorting! \n", n);
                return 0;

        }
        else if(argc == 2) {
                for(int i = 0; i < sizeof(operation)/sizeof(operation[0]); i++) {
                        if(strcmp(argv[1], operation[i].name) == 0) {
                                n = operation[i].function(array); 
                                printf("It took %d steps to complete sorting! \n", n);
                                return 0;

                        }
                }
                printf("Bad argument using! Please run the program with '-help' argument to get help. \n");
                return 1;
        } 

        else {
                printf("Bad argument using! Please run the program with '-help' argument to get help. \n");
                return 1;
        }
        free(array);
       }

int bubble_sort(int *array) {
        int x = 0;
        for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
                if(array[i] > array[i + 1]) {
                        int temp = array[i];
                        array[i] = array[i+1];
                        array[i+1] = temp;
                }
                x++;
        }
        return x;
}

int merge_sort(int *array) {
        printf("merge");
        return 0;
}

int selection_sort(int *array) {
        printf("selection");
        return 0;
}

int help(int *array) {
       printf("This is a CLI program that shows you sorting algorithms efficiency. You will asked to be prompt the algorithm you want to apply the sorting algorithm to 25 random generated integer. \n");
        printf("You can execute the program without any argument or you can give the algorithm you want as an argument and have a faster experience! \n");
        printf("Run the program with: \n");
        printf("-s: Selection Sort, -b: Bubble Sort, -m: Merge Sort \n");
}

int *randomize(void) {
        srand(time(NULL));
        int *array = malloc(25 * sizeof(int));

        for(int i = 0; i<25; i++) {
                array[i] = rand() % 1000;
        }

        for(int i = 0; i < 25; i++) {
                if(i == 24) {
                        printf("%i.", array[24]);
                } else {
                        printf("%i, ", array[i]);
                }
        }
        return array;
}
