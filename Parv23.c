#include <stdio.h>

int main(void) {
    int sub1, sub2, sub3, total, average;

    
    printf("Enter marks of sub1: ");
    scanf("%d", &sub1);

    printf("Enter marks of sub2: ");
    scanf("%d", &sub2);

    printf("Enter marks of sub3: ");
    scanf("%d", &sub3);
    
    total = sub1 + sub2 + sub3;

    average = total / 3;

    printf("Total marks is %d\n", total);
    printf("Average marks is %d\n", average);

    return 0;
}

