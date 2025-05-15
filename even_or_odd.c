#include <stdio.h>

int main(void) {
    int nbre;
    nbre = 9;

    scanf("%d", &nbre);

    if (nbre % 2 != 0) {
        printf("%d est un nombre impair.", nbre);
    } else {
        printf("%d est un nombre pair.", nbre);
    }

    return 0;
}