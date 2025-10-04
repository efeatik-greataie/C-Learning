#include <stdio.h> 
#include <stdlib.h> 
// Linked lists.

typedef struct node {
        int number;
        struct node *next;
} node;

void freenode(node *list);


int main(void) {
        // LIFO node struct: 
        node *list = malloc(sizeof(node));
        if(list == NULL) {
                return 1;
        }

        int x;
        printf("How many integers you want to add to the LIFO node? "); scanf("%d", &x);
        
        for(int i = 0; i < x; i++) {
                int y;
                node *n = malloc(sizeof(node));
                printf("Number %d: ", i+1); scanf("%d", &y);
                n->number = y;
                n->next = list;

                list = n;
        }
        
        node *ptr = list;
        while(ptr->next != NULL) {
                printf("%d \n", ptr->number);
                ptr = ptr->next;
        }


        printf("********************* \n");

        
        // FIFO node struct: 
        node *flist = malloc(sizeof(node));
        flist = NULL;

        printf("How many integers you want to add to the FIFO node? "); scanf("%d", &x);

        for(int i = 0; i < x; i++) {
                int y;
                node *n = malloc(sizeof(node));
                printf("Number %d: ", i+1); scanf("%d", &y);

                n->number = y;
                n->next = NULL;

                if(flist == NULL) {
                        // List hasn't been created. Create the first element.
                        flist = n;
                } 

                else {
                        // List has begun, we have to go to the end of it.
                        for(node *ptr = flist; ptr != NULL; ptr = ptr->next) {
                                if(ptr->next == NULL) {
                                        ptr->next = n;
                                        break;
                                }
                        }
                }
        }

        for(node *ptr = flist ; ptr != NULL; ptr = ptr->next) {
                printf("%d \n", ptr->number);
        } 


        freenode(list);
        freenode(flist);

        return 0;



}


void freenode(node *list) {
        while(list != NULL) {
                node *n = list;
                free(list);
                list = n->next;
        }
}
