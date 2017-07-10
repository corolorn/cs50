#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int x=0;
    
    do {
        printf("Heights: ");
        x=GetInt();
        if(x==0){
            return 0;
        }
    } while (x<0||x>23);
    
    for(int i=0;i<x;i++){
        
        for(int j=0;j<=x-i-2;j++){
            printf("%s"," ");
        }
        for(int l = 0;l<i+2;l++){
            printf("#");
            
        }
        printf("\n");
    }
    return 0;
    
}
