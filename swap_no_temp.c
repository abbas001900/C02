#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d %d", &a, &b);

    a += b;
    b = a - b;
    a -= b;


    printf("Après échange: a = %d, b = %d", a, b);

    return 0;
}