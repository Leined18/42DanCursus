#include "printf.h"

void putadress()
{
    
}

int main(void)
{
    int chars_written;
    
    void* memory_address = malloc(sizeof(int));
    chars_written = ft_putaddress(memory_address);
    free(memory_address);
    
    void* null_pointer = NULL;
    chars_written = ft_putaddress(null_pointer);
    
    return (0);
}