#include <stdio.h>

int main() {
    float numero;
    printf("Ingresa un número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}
