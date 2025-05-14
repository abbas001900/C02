#include <stdio.h>

int main(void) {
    int nbre;
    int factorial = 1;

    scanf("%d", &nbre);

    for (int i = 1; i <= nbre; i++) {
        factorial *= i;
    }

    printf("Le factoriel de %d est : %d\n", nbre, factorial);

    return 0;
}
