#include <stdio.h>

int main(void) {
    float l, b, a, p;

    
    printf(" length of  rectangle is ");
    scanf("%f", &l);

    printf(" breadth of rectangle is ");
    scanf("%f", &b);

    
    a = l * b;
    p = 2 * (l + b);

    
    printf("Area is %f\n", a);
    printf("Perimeter is %f\n", p);

    return 0;
}

