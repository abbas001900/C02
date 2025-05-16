#include <stdio.h>

int main(void) {
    int nbre;
    int cond;
    scanf("%d", &nbre);
    
    cond = nbre % 2;

    (cond == 0) ? printf("%d est un nombre pair.\n", nbre) : printf("%d est un nombre impair.\n", nbre);

    return 0;
}
