#include <unistd.h>

void	ft_putnbr(int i);
int	ft_atoi(char *str);
int	is_prime(int n);

int	main(int argc, char **argv)
{
	int	num;
	int	p;
	int	i;

	if (argc == 2 && num > 0)
	{
		p = 2;
		num = ft_atoi(argv[1]);
		i = p + 1;
		while (i <= num)
		{
			if (is_prime(i))
				p += i;
			i ++;
		}
		ft_putnbr(p);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2); 
}

int	ft_atoi(char *str)
{
	int	sign = 1;
	int	digit = 0;

	if (*str == '-')
	{
		sign = -1;
		str ++;
	}
	while (*str)
	{
		digit = digit * 10 + *str++ - '0';
	}
	return (digit * sign) ;
}

void	ft_putnbr(int i)
{
	char	digit;

	if (i >= 10)
		ft_putnbr(i / 10);
	digit = i % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int n)
{
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i ++;
	}
	return (1);
}	
