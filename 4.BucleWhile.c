#include <stdio.h>

int main() {
    int numero, contador = 0;

    while (1) {
        printf("Introduce un número: ");
        scanf("%d", &numero);

        if (numero == -1) {
            break; 
        }

        contador++;  
    }

    printf("Has introducido %d números\n", contador);
    return 0;
}
