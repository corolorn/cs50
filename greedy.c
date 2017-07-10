#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    
    float a = 0;
    float summa = 0;
    int c[] = {25,10,5,1};
    
    do {
        printf("Please set money: ");
        a=GetFloat();
        } while (a<0);
        
    int coint = round(a*100);
   
    for(int x=0;x<4;x++){
        summa=summa+coint/c[x];
        coint = coint%c[x];
    }
    printf("%.0f\n", summa);
}
