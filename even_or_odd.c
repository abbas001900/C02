#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    int cond = n % 2;

    if (cond == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }

    return 0;
}
