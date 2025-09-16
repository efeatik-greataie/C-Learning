#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
        char *name;
        char *number;
} person; 

int main(int argc, char *argv[]) {
        person people[3];

        people[0].name = "Efe";
        people[0].number = "+905555555555";

        people[1].name = "Aylin";
        people[1].number = "+905555555554";

        people[2].name = "Bebuş";
        people[2].number = "+905555555553";
        
        

}
