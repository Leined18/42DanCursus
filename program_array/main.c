#include "src/libft.h"
#include "src/array.h"

int main(void)
{
	char **p = NULL;

    p = array_program(p);
    // Correctly free the allocated memory
    free_memory(p);
    return (0);
}

