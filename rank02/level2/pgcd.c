#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char	*str);

int	main(int argc, char **argv)
{
	int	aux;
	int	one;
	int	two;
	int	d;

	one = ft_atoi(argv[1]);
	two = ft_atoi(argv[2]);
	aux = one;
	d = 1;
	if (one > two)
		aux = two;
	if (argc == 3 && one > 0 && two > 0)
	{
		while (aux > 1)
		{
			if (one % aux == 0 && two % aux == 0)
			{
				d = aux;
				break ;
			}
			aux --;
		}
		printf("%d", d);
	}
	printf("\n");	
}

int	ft_atoi(char	*str)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	while (str && str[i])
	{
		num *= 10;
		num += str[i] - '0';
		i ++;
	}
	return (num);
}
