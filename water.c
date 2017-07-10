#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please set minutes in your waterroof: ");
    int x = get_int();
    
   printf("minutes : %x\n",x);
    printf("bottles : %i\n",x*12);
    }
