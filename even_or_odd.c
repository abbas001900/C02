#include <stdio.h>

int main(void) {
    int nbre;

    scanf("%d", &nbre);
    int compo = nbre % 2;

    if ( compo != 0) {
        printf("%d est un nombre impair.\n", nbre);
    } else {
        printf("%d est un nombre pair.\n", nbre);
    }

    return 0;
}