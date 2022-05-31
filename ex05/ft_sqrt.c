#include <stdio.h>

int ft_sqrt(int nb)
{
	int aux;

	aux = 1;
	if (nb < 0)
		return (0);
	while (aux <= nb)
	{
		if (aux * aux == nb)
			return(aux);
		aux++;
	}
	return (0);
}

int	main(void)
{
	printf("El resultado es....: %d\n", ft_sqrt(2147395600));
	return (0);
}
// 92*92 = 8464
// 46340 * 46340 = 2147395600