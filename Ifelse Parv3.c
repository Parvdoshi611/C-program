#include <stdio.h>

int main(){
   int gs,all,de,ns;
   printf("Enter gross salary:");
   scanf("%d",&gs);

   if(gs>10000){
    all=gs*0.1;
    de=gs*0.03;
   }
   else if(gs>5000 && gs<=10000){
    all=gs*0.07;
    de=gs*0.02;
   }
   ns=gs+all-de;

   printf(" net salary is %d",ns);
   return 0;
}
