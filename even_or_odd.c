#include <stdio.h>

int main(void) {
    int nombre;

    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.", nombre);
    } else {
        printf("%d est un nombre impair.", nombre);
    }

    return 0;
}
