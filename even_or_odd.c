#include <stdio.h>

int main() {
    int nombre;

    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("%s est un nombre pair.", nombre);
    } else {
        printf("%s est un nombre impair.", nombre);
    }

    return 0;
}
