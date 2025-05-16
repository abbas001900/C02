#include <stdio.h>

int main(void) {
    int nbre;
    int cond;
    int retour;
    
    retour = scanf("%d", &nbre);
    cond = nbre % 2;

    if (retour == 1) {
        (cond == 0) ? printf("%d est un nombre pair.\n", nbre) : printf("%d est un nombre impair.\n", nbre);
    }
    else {
        printf("Veuillez entrer un entier.\n");
    }


    return 0;
}
