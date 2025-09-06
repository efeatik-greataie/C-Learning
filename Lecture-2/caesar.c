#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_control(int argc, char *m[]);
void encrypt(int argc, char *m[]); 
void decrypt(int argc, char *m[]);

int main(int argc, char *argv[]) {
      get_control(argc, argv);
}

int get_control(int argc, char *m[])  {
      if(strcmp(m[1], "-help") == 0 || strcmp(m[1], "help") == 0 || strcmp(m[1], "-h") == 0) {
                printf("Caesar is a encryptian tool that you can use to encrypt and decrypt texts with Caesar Cipher method. \n");
                printf("Program uses given arguments to process information. The appopirate using should be like this: \n");
                printf("To encrypt a text: ./caesar -k [key: the value that will cipher your text] -m [message: the text you want to cipher.] \n");
                printf("To decrypt a text: ./caesar -d -k [key] -m [message] \n");
                return 0;
        } else if (strcmp(m[1], "-d") == 0 && strcmp(m[2], "-k") == 0 && strcmp(m[4], "-m") == 0) {
                decrypt(argc, m);
                return 0;
        } else if(strcmp(m[1], "-k") == 0 && strcmp(m[3], "-m") == 0) {
                encrypt(argc, m);
                return 0;
        } else {
                printf("Bad argument using! Please try \"./caesar -help\" to get help. \n");
                return 1;
        }
}

void encrypt(int argc, char *m[]) {
        long k = strtol(m[2], NULL, 10);
        int i = 4;
        
        while(i < argc) {
                char *s = m[i];
                int sl = strlen(s);
                int x = 0;

                while(x < sl) {
                        char new = s[x] + k;
                        printf("%c", new);
                        x++;
                }
                i++;
        }

        printf("\n");
}

void decrypt(int argc, char *m[]) {
        int k = strtol(m[3], NULL, 10);
        int i = 5;

        while(i < argc) {
                char *s = m[i];
                int sl = strlen(s);
                int x = 0;

                while(x < sl) {
                        char new = s[x] - k;
                        printf("%c", new);
                        x++;
                }
                printf(" ");
                i++;
        }
        printf("\n");
} 

// Get arguments and include 3 using: ./caesar help, ./caesar -k [key] -m [message], ./caesar -d -k [key] -m [message]
