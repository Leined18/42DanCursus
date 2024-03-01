#include "libft.h"

int	ft_printf(const char *str, ...)
{


}

int main(void)
{
    int value = 42;
    char* text = "Hello, World!";
    
    int printed_chars = ft_printf("Value: %d, Text: %s\n", value, text);
    
    return (0);
}