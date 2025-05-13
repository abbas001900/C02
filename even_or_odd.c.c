#include <stdio.h>

int main(void) {
    int nbre;

    scanf("%d", &nbre);

    int cond = nbre % 2;

    if (cond == 0) {
        printf("%d est un nombre pair.\n", nbre);
    } else {
        printf("%d est un nombre impair.\n", nbre);
    }

    return 0;
}
