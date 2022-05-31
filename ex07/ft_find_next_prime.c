#include <stdio.h>

int ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n < nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int	aux;

	aux = nb + 1;
	while (ft_is_prime(aux) == 0)
		aux++;
	return (aux);
}

int	main(void)
{
	printf("El resultado es....: %d\n", ft_find_next_prime(17));
	return (0);
}