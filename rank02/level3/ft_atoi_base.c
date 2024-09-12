#include <stdlib.h>
#include <stdio.h>

int	ft_lower(char ch);
int	powerof(int base, int power);
int	ft_atoi_base(const char *str, int str_base);

//int	main(int argc, char **argv)
//{	
//	printf("%d", ft_atoi_base(argv[1], atoi(argv[2])));
//}

int	ft_atoi_base(const char *str, int str_base)
{
	int	power = 0;
	int	i = 0;
	int	digit;
	int	sign = 1;
	int	result = 0;
	char	base[] = "0123456789abcdef";
	char	ch;
	int	elevado;

	if (str[0] == '-')
	{
		sign = -1;
		i ++;
	}
	while (str[power])
		power ++;
	power --;
	while (str[i])
	{
		ch = ft_lower(str[i]);
		digit = 0;
		while (ch != base[digit])
			digit ++;
		elevado = powerof(str_base, power);
		digit *= elevado;
		result += digit;
		power --;
		i ++;
	}
	return (result * sign);
}

int	ft_lower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}

int	powerof(int base, int power)
{
	int	n = base;

	if (power == 0)
		n = 1;
	while (power > 1)
	{
		n *= base;
		power --;
	}
	return (n);
}	
