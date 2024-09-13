#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int digitamount = 1;
	int nbr_cpy = nbr;

	while (nbr_cpy > 9)
	{
		nbr_cpy /= 10;
		digitamount ++;
	}
	char *str;
	str = (char *)malloc((digitamount + 1) * sizeof(char));
	str[digitamount] = '\0';
	digitamount --;
	while (nbr >= 1)
	{
		str[digitamount] = (nbr % 10) + '0';
		nbr /= 10;
		digitamount --;
	}
	return(str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_itoa(atoi(argv[1])));
}
