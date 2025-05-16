#include <stdio.h>

int main(void) {
    int nbre;
    int cond;
    scanf("%d", &nbre);
    
    cond = nbre % 2;

    (cond == 0) ? printf("%d est un nombre pair.", nbre) : printf("%d est un nombre impair.", nbre);

    return 0;
}
