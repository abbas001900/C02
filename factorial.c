#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main(void) {
    int nbre;             // Variable pour stocker le nombre saisi par l'utilisateur
    int factorial = 1;    // Initialisation du résultat du factoriel à 1

    scanf("%d", &nbre);   // Lecture du nombre saisi par l'utilisateur

    // Boucle pour calculer le factoriel : multiplier factorial par chaque entier de 1 à nbre
    for (int i = 1; i <= nbre; i++) {
        factorial *= i;   // factorial = factorial * i
    }

    // Affichage du résultat
    printf("Le factoriel de %d est : %d\n", nbre, factorial);

    return 0; // Fin normale du programme
}

