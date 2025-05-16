#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main(void) {
    int a, b; // Déclaration de deux variables entières

    scanf("%d %d", &a, &b); // Lecture de deux entiers saisis par l'utilisateur

    // Échange des valeurs de a et b sans utiliser de variable temporaire
    a = a + b; // a devient la somme des deux nombres
    b = a - b; // b devient la valeur initiale de a
    a = a - b; // a devient la valeur initiale de b

    printf("Après échange : a = %d, b = %d\n", a, b); // Affichage des valeurs après échange

    return 0; // Fin normale du programme
}
