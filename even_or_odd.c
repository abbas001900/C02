#include <stdio.h>

int main(void) {
    int nbre; // declaration de la variable 'nbre' de type int

    scanf("%d", &nbre); // Demande a l'utilisateur d'entrer un nombre et assignation de la valeur a la variable nbre

    // Si le restant de la division du nombre entre par l'utlisateur par 2 est 0
    if(nbre % 2 == 0)
        printf("%d est un nombre pair.", nbre); // Ecrire nbre (le nombre entre par l'utilisateur) est un nombre pair
    else
        printf("%d est un nombre impair.", nbre); // Sinon Ecrire nbre(le nombre entre par l'utilisateur) est un nombre impair

    return 0;
}