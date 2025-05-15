#include <stdio.h>

int main(void) {
    int nbre = 0; // Initialisation de la variable nbre de type int a 0
    int cond;

    scanf("%d", &nbre); // Demande a l'utilisateur d'entrer un nombre et assignation de la valeur a la variable nombre
    cond = nbre % 2;
    
    // Si le restant de la division du nombre entre par l'utlisateur par 2 est 0
    if(cond == 0)
        printf("%d est un nombre pair.\n", nbre); // Ecrire nbre (le nombre entre par l'utilisateur) est un nombre pair
    else
        printf("%d est un nombre impair.", nbre); // Sinon Ecrire nbre(le nombre entre par l'utilisateur) est un nombre impair

    return 0;
}