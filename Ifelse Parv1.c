#include<stdio.h>

int main(){
     int a,b;
     printf("Value of two numbers:");
     scanf("%d %d",&a,&b);
     if(a>b){
        printf("%d is greater than %d",a,b);
     }
     else{


        printf("%d is smaller than %d",a,b);
     }
     return 0;
}
