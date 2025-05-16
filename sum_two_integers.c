#include <stdio.h>  // inclusion de la bibliothèque standard

int main(void) {
    int nbre1 ;  // Déclaration de la première variable entière
    int nbre2 ;  // Déclaration de la deuxième variable entière

    // Lecture de deux entiers séparés par un espace
    scanf("%d %d", &nbre1, &nbre2);  // Correct mais on peut aussi écrire "%d %d" (plus lisible)

    int somme = nbre1 + nbre2;  // Calcul de la somme des deux entiers

    printf("La somme est : %d\n", somme);  // Affichage du résultat

    return 0; // Fin normale du programme
}
