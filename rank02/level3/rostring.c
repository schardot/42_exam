#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	*start;
	char	*end;

	if (argc > 1)
	{
		s = argv[1];
		while (*s == ' ' || *s == '\t')
			s ++;
		start = s;
		while (*s && *s != ' ' && *s != '\t')
		{
			end = s;
			s ++;
		}
		while (*s)
		{
			if (*s == ' ' || *s == '	')
				s ++;
			else
			{
				write (1, s, 1);
				s ++;
				if (*s == ' ' || *s == '	' || *s == '\0')
					write (1, " ", 1);
			}
		}
		while (start <= end)
		{
			write(1, start, 1);
			start ++;
		}
		write (1, "\n", 1);
	}
}	
