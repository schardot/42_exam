#include <unistd.h>

int	ft_isalpha(char ch);

int	main(int argc, char **argv)
{
	int	i;
	int	xcase;
	int	new;
	int	distance;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			xcase = ft_isalpha(argv[1][i]);
			if (xcase == 'a' || xcase == 'A')
			{
				distance = argv[1][i] - xcase;
				new = xcase + 25  - distance;
				write(1, &new, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write (1, "\n", 1);
}

int	ft_isalpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return ('a');
	if (ch >= 'A' && ch <= 'Z')
		return ('A');
	else
		return (-1);
}
