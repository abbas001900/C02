#include <stdio.h>

int main() {
    int nombre;
    int resultat;

    // scanf retourne 1 si la lecture d'un entier réussit
    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);

    return 0;
}
