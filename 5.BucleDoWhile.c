#include <stdio.h>
#include <string.h>

int main() {
    char contrasena[20];
    char contrasenaCorrecta[20] = "123456";  // La correcta es 123456

    do {
        printf("Introduce la contrasena: ");
        scanf("%s", contrasena);

        if (strcmp(contrasena, contrasenaCorrecta) != 0) {
            printf("Contraseña incorrecta. Intenta de nuevo: ");
        }

    } while (strcmp(contrasena, contrasenaCorrecta) != 0);  

    printf("Contraseña correcta.\n");
    return 0;
}
