#include <stdio.h>

int main(){
      int gs,di,ns;

      printf("Enter Gross salary");
      scanf("%d",&gs);


      if(gs>20000){
        di=gs*0.15;
      }
      else if(gs>10000 && gs<20000){
        di=gs*0.1;
      }
      else
        di=gs*0.05;

      ns=gs-di;

      printf("Value of net sales is %d",ns);

      return 0;
}
