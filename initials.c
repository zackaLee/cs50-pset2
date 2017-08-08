//This program will take user input and of there name and print out their initials 

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
   
    printf("Please enter your name: \n");
    //get users name and put it in a string
    string name = get_string();
    
    //int i = 0;
    //get length of string 'name'
    for(int i = 0, n = strlen(name); i < n; i++)
    {
       if (i == 0)
       {
           //if the letter is in 1st position make it uppercase
           printf("%c", toupper(name[i]));
       }
       else if(name[i - 1] == ' ')
       {
           //if space before letter is blank make next letter upper
           printf("%c", toupper(name[i]));
       }
       
    }
    
    printf("\n");
}

 