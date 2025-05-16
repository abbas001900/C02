#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {
    int nombre;     // Déclaration d'une variable entière pour stocker le nombre


    scanf("%d", &nombre); // Lecture d'un entier saisi par l'utilisateur et stockage dans 'nombre'

    // Vérifie si le reste de la division du nombre par 2 est 0
    if (nombre % 2 == 0) {
        printf("%d est pair.\n", nombre); // Affiche que le nombre est pair
    } else {
        printf("%d est impair.\n", nombre); // Affiche que le nombre est impair
    }

    return 0; // Fin normale du programme
}

