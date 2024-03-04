#include "libft.h"
#include "array.h"

void print_current_array(char **p)
{
    printf("Current array:\n");
    size_t i = 0;
    while (p[i] != NULL) {
        printf("%s,", p[i]);
        i++;
    }
    printf("\n");
}

// {0 ,1 ,2 ,3 } paaa

