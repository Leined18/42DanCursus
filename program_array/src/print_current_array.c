#include "libft.h"
#include "array.h"

void print_current_array(char **p, size_t x)
{
    printf("Current array:\n");
    for (size_t i = 0; i < x; i++) {
        if (strlen(p[i]) > 0) {
            printf("%s-", p[i]);
        }
    }
    printf("\n");
}
