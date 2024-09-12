#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int	i;
	int	flag = 0;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i ++;
		while(str[i])
		{
			if (!(str[i] == ' ' || str[i] == '\t'))
			{
				if (flag)
					write(1, "   ", 3);
				flag = 0;
				write(1, &str[i], 1);
			}
			else
				flag = 1;
			i ++;
		}
	}
	write(1, "\n", 1);
}		
