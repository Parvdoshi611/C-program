#include <stdio.h>

int main(void){
    int n,i=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    
    do{
        i++;
        if(i%2 == 0)
            printf( "%d\n",i);
            }
    while(i<n);
}

