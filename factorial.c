#include <stdio.h>

int main(void) {
    int nbre;
    int factorial = 1;

    printf("Entrez un nombre entier: ");
    scanf("%d", &n);

    for (int i = 1; i <= nbre; i++) {
        factorial *= i;
    }

    printf("Le factoriel de %d est : %d\n", n, factorial);

    return 0;
}
