#include <stdio.h>

int main(void) {
    float l, b, a, p;

    
    printf(" length of  rectangle: ");
    scanf("%f", &l);

    printf(" breadth of rectangle: ");
    scanf("%f", &b);

    
    a = l * b;
    p = 2 * (l + b);

    
    printf("Area of  rectangle  is %f\n", a);
    printf("Perimeter of  rectangle is %f\n", p);

    return 0;
}

