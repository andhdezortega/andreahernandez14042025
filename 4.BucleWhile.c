#include <stdio.h>

int main () {
    int numero, contador = 0;

    printf("Introduce un número: ");
    scanf("%d", &numero);

    do {
        printf("Otro número: ");
        scanf("%d", &numero);

        if (numero != -1) {
            contador++;  
        }

    } while (numero != -1);  

    printf("Has introducido %d números\n", contador);
    return 0;
}