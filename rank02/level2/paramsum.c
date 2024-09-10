#include <unistd.h>

void	ft_putnbr(int	n);

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(argc - 1);
	else if (argc == 1)
		ft_putnbr(0);
	write(1, "\n", 1);
}

void	ft_putnbr(int n)
{
	char	digit;
	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write (1, &digit, 1);
}
