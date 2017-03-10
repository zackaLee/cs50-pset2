//This program will take user input and of there name and print out their initials 

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
   
    //get users name and put it in a string
    string name = get_string();
    
    //int i = 0;
    for(int i = 0, n = strlen(name); i < n; i++)
    {
       if (i == 0)
       {
           printf("%c", toupper(name[i]));
       }
       else if(name[i - 1] == ' ')
       {
           printf("%c", toupper(name[i]));
       }
       
    }
    
    printf("\n");
}

 