#include <stdio.h>

int main(void) {
    int n;

    // Lecture de l'entier
    scanf("%d", &n);

    // Affichage seulement si le nombre est impair
    if (n % 2 != 0) {
        printf("%d est un nombre impair.\n", n);
    }

    return 0;
}
