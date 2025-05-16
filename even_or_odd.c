#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre;
    char nbrStr[12];

    scanf("%d", &nombre);
    sprintf(nbrStr, "%d", nombre);


    if ((nombre % 2) == 0) {
        printf("%s est un nombre pair.", nbrStr);
    } else {
        printf("%s est un nombre impair.", nbrStr);
    }

    return 0;
}
