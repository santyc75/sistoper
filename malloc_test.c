#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    size_t size = 100 * 1024 * 1024; // 100 MB
    printf("Asignando %lu MB de memoria...\n", size / (1024 * 1024));

    char *buffer = (char *)malloc(size);
    if (buffer == NULL) {
        perror("Error en malloc");
        return 1;
    }

    printf("Memoria asignada en la dirección %p.\n", (void *)buffer);
    printf("Presiona Enter para continuar y revisar el consumo de memoria...\n");
    while (getchar() != '\n'); // Asegurar que se captura la entrada

    free(buffer);
    printf("Memoria liberada. Presiona Enter para salir...\n");
    while (getchar() != '\n'); 

    return 0;
}
