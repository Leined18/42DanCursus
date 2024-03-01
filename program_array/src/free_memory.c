#include "libft.h"
#include "array.h"

void free_memory(char **p, size_t size)
{
    for (size_t i = 0; i < size; i++) {
        free(p[i]); // Liberar cada cadena asignada.
    }
    free(p);
}