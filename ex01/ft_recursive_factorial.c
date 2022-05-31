#include <stdio.h>

int	ft_recursive_factorial(int	nb)
{
	int	aux;

	aux = nb - 1;
	if	(nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(aux));
}

int	main(void)
{
	printf("El resultado es....: %d\n",ft_recursive_factorial(5));
	return(0);
}