#include "printf.h"

int format(va_list args, char *str)
{
    int result;

    result = 0;
    if (*str == 'd')
        result += ft_putnbr_fd(va_arg(args, int), 1);
    else if (*str == 'c')
        result += ft_putchar_fd(va_arg(args, int), 1);
    else if (*str == 's')
        result += ft_putstr_fd(va_arg(args, char *), 1);
    else if (*str == 'p')
    {
        void *p = va_arg(args, void *);
        if (p)
            result += ft_putadress(p);
        else
            result += ft_putstr_fd("0x0", 1);
    }
    return (result);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int i = 0;
    int length = 0;

    va_start(args, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            if (ft_strchr("cdspxX%", str[i + 1]))
            {
                length += format(args, (char *)&str[++i]);
                i++;
            }
        }
        else
        {
            ft_putchar_fd(str[i], 1);
            length++;
        }
        i++;
    }
    va_end(args);
    return (length);
}
/*
int main(void)
{
    int value = 42;
    char *text = "Hello, World!";

    int printed_chars = ft_printf("Value: %d, Text: %s\n", value, text);
    ft_printf("Characters printed: %d\n", printed_chars);

    return (0);
}*/