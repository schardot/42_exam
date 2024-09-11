#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	aux;
	int	b;

	b = 7;
	while (b >= 0)
	{
		aux = octet;
		aux >>= b;
		if ((aux & 1) == 1)
			write(1, "1", 1);
		else if ((aux & 1) == 0)
			write(1, "0", 1);
		b --;
	}
}

