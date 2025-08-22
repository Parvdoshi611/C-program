#include<stdio.h>

int main(void){
  int a,b,c;
  printf("Value of three number :");
  scanf("%d %d %d",&a,&b,&c);

  if(a>b && a>c){
    printf("%d is greatest",a);
  }
  else if(b>a && b>c){
    printf("%d is greatest",b);
  }
  else if (c>a && c>b){
    printf("%d is greatest",c);
  }
   if(a<b && a<c){
    printf("%d is smallest",a);
  }
  else if(b<a && b<c){
    printf("%d is smallest",b);
  }
  else if (c<a && c<b){
    printf("%d is smallest",c);
  }
  return 0;
}
