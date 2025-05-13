#include <stdio.h>

int main(void) {
    int n ;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d est un nombre pair.", n);
    } else {
        printf("%d est un nombre impair.", n);
    }

    return 0;
}
