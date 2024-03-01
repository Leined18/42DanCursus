#include "libft.h"
#include "array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

int array_program(void)
{
    size_t size;
    char **p;
    size_t n;
    size_t total_elements = 0;

    printf("put an array size : ");
    scanf("%zu", &size);
    // Limpiar el buffer de entrada
    scanf("%*c");

    p = (char **)malloc(sizeof(char *) * size);
    if (!p) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (size_t i = 0; i < size; i++) {
        p[i] = (char *)malloc(sizeof(char) * (MAX_STRING_LENGTH + 1));
        if (!p[i]) {
            printf("Memory allocation failed.\n");
            free_memory(p, i);
            return 1;
        }
    }

    while (total_elements <= size)
    {
        printf("\nMenu:\n");
        printf("[0] Exit\n");
        printf("[1] Add a string to the array\n");
        printf("[2] Modify a string\n");
        printf("[3] Print the array\n");

        scanf("%zu", &n);

        if (n == 0 || total_elements == size) {
            break;
        }
        else if (n == 1)
        {
            printf("\n"); // Salto de línea antes de imprimir el mensaje de entrada
            printf("Enter a string: "); // Se imprime el mensaje de entrada
            p = enter_new_string(p, total_elements);
            total_elements++;
        }
        else if (n == 2)
        {
            
        }
        else if (n == 3) {
            print_current_array(p, total_elements);
        }
        else {
            printf("Invalid option.\n");
        }
    }

    print_current_array(p, total_elements);
    free_memory(p, size);
    return 0;
}