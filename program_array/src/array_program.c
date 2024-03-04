#include "libft.h"
#include "array.h"

#define MAX_STRING_LENGTH 100

char    **array_program(char **p)
{
    //char **ptr;
    size_t size;
    size_t n;
    size_t total_elements = 0;

    printf("\033[1;36mput an array size : \033[0m");
    if(scanf("%zu", &size) != 1) { // Removed the isdigit check as size is already a size_t
        printf("\033[1;31mInput must be a digit.\n\033[0m");
        return (NULL);
    }
    // Limpiar el buffer de entrada
    scanf("%*c");
    if (size == 0 || size > SIZE_MAX / sizeof(char*)) // CONTROLA LOS DESBORDAMIENTOS DE MEMORIA
    {
        printf("\033[1;31mInvalid input: size is out of range.\n\033[0m");
        free_memory(p); // Suponiendo que esta es la llamada de función correcta para liberar la memoria asignada
        return (NULL);
    }
    p = (char **)ft_calloc(size + 1, sizeof(char *)); // Ajuste de cálculo del tamaño de malloc
    if (!p) {
        printf("\033[1;31mMemory allocation failed.\n\033[0m");
        return (NULL);
    }
    p[size] = NULL; // Terminar con NULL el arreglo

    size_t i = 0;
    while (i < size) {
        if (MAX_STRING_LENGTH == 0 || MAX_STRING_LENGTH > SIZE_MAX / sizeof(char)) // CONTROLA LOS DESBORDAMIENTOS DE MEMORIA
        {
            printf("\033[1;31mString length is out of range.\n\033[0m");
            free_memory(p);
            return (NULL);
        }
        p[i] = (char *)calloc(MAX_STRING_LENGTH + 1, sizeof(char)); // Using calloc instead of malloc
        if (!p[i]) {
            printf("\033[1;31mMemory allocation failed.\n\033[0m");
            free_memory(p);
            return (NULL);
        }
        i++;
    }

    printf("\n\033[1;32mInitial option:\n");
    printf("\033[1;34m[1] Add the first string to the array\n\033[0m");
    if(scanf("%zu", &n) != 1) { // Removed the isdigit check as n is already a size_t
        printf("\033[1;31mInput must be a digit.\n\033[0m");
        return (NULL);
    }
    // Limpiar el buffer de entrada después de la operación inicial
    scanf("%*c");
    if (n == 1) {
        printf("\033[1;33m\nEnter the first string: \033[0m");
        p = enter_new_string(p, total_elements);
        total_elements++;
    }

    while (total_elements < size)
    {
        printf("\n\033[1;32mMenu:\n");
        printf("\033[1;34m[0] Exit\n");
        printf("[1] Add a string to the array\n");
        printf("[2] Modify a string\n");
        printf("[3] Print the array\n\033[0m");

        if(scanf("%zu", &n) != 1) { // Removed the isdigit check as n is already a size_t
            printf("\033[1;31mInput must be a digit.\n\033[0m");
            return (NULL);
        }
        // Limpiar el buffer de entrada después de cada entrada
        scanf("%*c");
        if (n == 0)
        {
            break;
        }
        else if (n == 1 && total_elements < size)
        {
            printf("\n\033[1;33m\nEnter a string: \033[0m");
            p = enter_new_string(p, total_elements);
            total_elements++;
        }
        else if (n == 2)
        {
        // Implementar la modificación de la cadena
            size_t index;
            char new_string[MAX_STRING_LENGTH + 1];
            printf("\033[1;33m\nEnter the index of the string to modify: \033[0m");
            if(scanf("%zu", &index) != 1 || index >= total_elements) {
                printf("\033[1;31mInvalid index.\n\033[0m");
                } else {
                    printf("\033[1;33m\nEnter the new string: \033[0m");
                    scanf("%100s", new_string);
                    strcpy(p[index], new_string);
                }
            }
        else if (n == 3) {
            print_current_array(p);
        }
        else {
            printf("\033[1;31mInvalid option.\n\033[0m");
        }
    }

    print_current_array(p);
    free_memory(p);
    return (p);
}