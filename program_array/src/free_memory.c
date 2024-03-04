#include "libft.h"
#include "array.h"

void free_memory(char **p)
{
    size_t i = 0;
    while (p[i] != NULL) {
        free(p[i]); // Liberar cada cadena asignada.
        i++;
    }
    free(p);
}
