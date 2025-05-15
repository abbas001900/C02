#include <stdio.h>

int main(void) {
    int nbre;
    if (scanf("%d", &nbre) != 1) return 1;

    if (nbre % 2 == 0) {
        printf("%d est un nombre pair.\n", nbre);
    } else {
        printf("%d est un nombre impair.\n", nbre);
    }
    return 0;
}