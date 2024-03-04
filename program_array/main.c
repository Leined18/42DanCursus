#include "src/libft.h"
#include "src/array.h"

int main(void)
{
	char **p = NULL;
    char **temp; // Additional pointer for safe iteration
    size_t i, count = 0;

    p = array_program(p);
    temp = p; // Initialize temp to the start of the array
    while (*temp != NULL) { // Count the number of elements
        count++;
        temp++;
    }

    i = 0; // Initialize i for while loop
    while (i < count) {
        printf("%s\n", p[i]);
        i++;
    }
    // Correctly free the allocated memory
    free_memory(p);
    return (0);
}

