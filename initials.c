#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    
    string x;
    
        
        x=GetString();
        printf("%c", toupper(x[0]));
       for( int i = 0,n= strlen(x); i < n; i++){
           
           if (x[i] == ' ' && (x[i+1]) != '\0'){
               printf("%c", toupper(x[i+1]));
               i++;
           }
           
        }
        
        printf("\n");
}
