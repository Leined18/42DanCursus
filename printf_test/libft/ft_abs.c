
#include "libft.h"

long	ft_abs(long n)
{
	long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

/*
int main()
{
    int a = -190000;
    printf("%d\n", abs(a));
}*/
