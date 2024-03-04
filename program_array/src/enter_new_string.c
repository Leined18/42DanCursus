#include "libft.h"
#include "array.h"

char    **enter_new_string(char **p, size_t i)
{
    p[i] = ft_calloc(101, sizeof(char)); // Allocate space for the new string
    printf("Enter a string: ");
    fgets(p[i], 101, stdin); // Leer una cadena permitiendo espacios y eliminando el salto de línea
    p[i][strcspn(p[i], "\n")] = 0; // Remove trailing newline character
    print_current_array(p);
    return (p);
}