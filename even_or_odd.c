#include <stdio.h>

int main(void) {
    int nombre;
    scanf("%d", &nombre);

    if ((nombre & 1) == 0) {
        printf("Le nombre est pair.\n");
    } else {
        printf("Le nombre est impair.\n");
    }



    return 0;
}
