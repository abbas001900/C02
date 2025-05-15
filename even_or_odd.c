#include <stdio.h>

int main() {
    int nbre;

    scanf("%d", &nbre);

    if (nbre%2 != 0) {
        printf("%d est un nombre impair.\n", nbre);
    } else {
        printf("%d est un nombre pair.\n", nbre);
    }

    return 0;
}