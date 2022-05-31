#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	int	aux;

	aux = 1;
	if	(nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		aux *= nb;
		nb--;
	}
	return (aux);
}

int	main(void)
{
	printf("El resultado es....: %d\n",ft_iterative_factorial(5));
	return(0);
}
// !0 = 1 (wikipedia)