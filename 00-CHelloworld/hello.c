#include <stdio.h>

int main() {

    FILE *archivo;

    archivo = fopen("output.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Hola mundo!\n");

    fclose(archivo);

    printf("Hola mundo!\n");

    return 0;
}
