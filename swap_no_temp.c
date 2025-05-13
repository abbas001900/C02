#include <stdio.h>

int main(void) {
    int a, b;

    // Lecture des deux nombres
    scanf("%d%d",&a,&b);


    // Échange sans utiliser de variable temporaire
    a = a + b;  // a devient la somme de a et b
    b = a - b;  // b devient l'ancienne valeur de a
    a = a - b;  // a devient l'ancienne valeur de b

    // Affichage après échange
    printf("Après échange: a = %d, b = %d", a,b);

    return 0;
}
