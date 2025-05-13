#include <stdio.h>

int main(void) {
    int nombre;
    scanf("%d", &nombre);
    printf("%d est un nombre %s.\n", nombre, (nombre % 2 == 0) ? "pair" : "impair");
    return 0;
}
