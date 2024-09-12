#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{	
		char	*str;
		int	i;
		int	flag = 0;

		str = argv[1];
		i = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i ++;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
				flag = 1;
			else if (str[i] != ' ' || str[i] != '\t') 
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &str[i], 1);
			}
			i ++;
		}
	}
	write(1, "\n", 1);
}
