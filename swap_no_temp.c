#include <stdio.h>

int main(void) {
    int a;
    int b;

    // Lecture des deux nombres (sans message pour coller à l'exemple)
    scanf("%d%d", &a, &b);

    // Échange purement arithmétique (méthode addition/soustraction)
    a = a + b;
    b = a - b; // Maintenant b = a_original
    a = a - b; // Maintenant a = b_original

    // Affichage strictement identique à l'exemple
    printf("Après échange: a = %d, b = %d", a, b);

    return 0;
}