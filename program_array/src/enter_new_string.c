#include "libft.h"
#include "array.h"

char **enter_new_string(char **p, size_t i)
{
    printf("Enter a string: ");
    scanf("%*c"); // Limpiar el buffer de entrada
    scanf("%100[^\n]", p[i]); // Leer una cadena con scanf
    print_current_array(p,i);
    return (p);
}