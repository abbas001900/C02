#include <stdio.h>

int main(void) {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;


    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}