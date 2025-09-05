#include <stdio.h>
#include <string.h>

typedef char *string;

void encrypt(int k, string m[]);

int main(int argc, string argv[]) {
        if(argc < 1) {
                printf("You are missin arguments!\n");
                printf("Please use the command as \"caesar -k [the key you want to use that is between 1 to 25] -m [the message you want to encrypt with Caesar Cipher.\"]\n");
                return 1;
        } else if (strcmp(argv[1], "-k") == 0 || strcmp(argv[3], "-m") == 0){ 
                printf("Bad arguments!\n");
                printf("Please use the command as \"caesar -k [key] -m [message]\"\n");
                return 2;
        }

        else{
               encrypt(argc, argv);
        }
}

void encrypt(int k, string m[]) {

        char c = m[2][1];
        printf("%c", c);
}
