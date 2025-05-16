#include <stdio.h>

int main() {
    int nombre;
    int resultat;

    // scanf retourne 1 si la lecture d'un entier réussit
    resultat = scanf("%d", &nombre);

    if (resultat != 1) {
        printf("%d n'est ni pair ni impair.\n", nombre);
        return 1; // Fin du programme avec erreur
    }

    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;
}
