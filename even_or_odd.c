int estPair(int n) {
    return n % 2 == 0;
}

int main() {
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (estPair(nombre)) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;
}
