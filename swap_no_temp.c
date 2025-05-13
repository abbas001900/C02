#include <stdio.h>

int main(void) {
    int a, b;

    // Lecture des deux nombres avec vérification
    printf("Entrez deux nombres : ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Erreur : saisie invalide.\n");
        return 1;
    }

    // Échange sans variable temporaire (méthode XOR pour éviter les overflows)
    a ^= b;
    b ^= a;
    a ^= b;

    // Affichage conforme à l'exemple
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}