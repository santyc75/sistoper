#include <stdio.h>

void vulnerable_function() {
    char buffer[10];  // Puede almacenar hasta 9 caracteres + '\0'

    printf("Ingresa un texto (máx. 9 caracteres): ");
    fgets(buffer, sizeof(buffer), stdin); // fgets evita el buffer overflow

    printf("Has ingresado: %s\n", buffer);
}

int main() {
    vulnerable_function();
    return 0;
}
