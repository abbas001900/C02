#include <stdio.h>

void testerParite(int n) {
    if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }
}

int main(void) {
    int nombre;
    scanf("%d", &nombre);
    testerParite(nombre);
    return 0;
}
