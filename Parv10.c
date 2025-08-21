#include <stdio.h>

int main(void) {
    int d,r,p;

    
    printf("Enter amount in dollars: ");
    scanf("%d", &d);

    
    r= d* 48;

    
    p= r/ 70;

    
    printf("The conversion into pounds is \n",  p);

    return 0;
}

