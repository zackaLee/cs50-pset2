//This is the implementation of the Ceaser cipher by zack lee

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int main(int argc, string argv[])
{   
    int k = 0;
    int arg = argc;
    if(arg == 2)
    
    //converts argument to int or asks for an argument
    for (int i = 0; i < arg; i++)
    {
        if(argv[1] != 0)
        k = atoi(argv[1]);
    }
    else if(arg < 2)
    {
        printf("Ceasar needs a key!\n");
        return 1;
    }
    
    //gets message and applies to message depending on if they are upper or lower
    printf("plaintext:");
    string plaintext = get_string();
    
    printf("ciphertext:");
    for (int i = 0,n = strlen(plaintext); n > i; i++)
    {
        
             
            if(isupper(plaintext[i]))
            {
                printf("%c",'A' + (plaintext[i] - 'A' + k) % 26);
            }
            else if(islower(plaintext[i]))
            {
                 printf("%c",'a' + (plaintext[i] - 'a' + k) % 26);
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        
    }
     
    printf("\n");
    return 0;
    
}