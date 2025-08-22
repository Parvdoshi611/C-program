#include <stdio.h>

int main(void){
    int sub1,sub2,sub3,av;

    printf("Enter the marks of three subjects");
    scanf("%d %d %d",&sub1,&sub2,&sub3);

    av=(sub1+sub2+sub3)/3;

    if(av>70){
        printf("Your grade is distinction");
    }
    else if(av>60 && av<70){
        printf("Your grade is first");
    }
    else if(av>50 && av<60){
        printf("Your grade is Second");
    }
    else if(av>35 && av<50){
        printf("Your grade is Third");
    }
    else
        printf("You fail");
    return 0;
}
