#include <stdio.h>

int main(void) {
    int gs, a, d, ns;

    
    printf("Gross salary is ");
    scanf("%d", &gs);

    
    a = 0.10 * gs;

    
    d = 0.03 * gs;

    
    ns = gs + a - d;
    
    printf("The net salary is %d\n", ns);

    return 0;
}

