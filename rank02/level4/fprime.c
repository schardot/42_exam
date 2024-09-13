#include <stdio.h>
#include <stdlib.h>

int	isprime(int num);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	int num;

	num = atoi(argv[1]);
	if (num == 1)
	{
		printf("1");
		return (0);
	}
	int prime = 2;
	while (num > 1)
	{
		if (num % prime == 0)
		{
			printf("%d", prime);
			num /= prime;
			if (num > 1) //pra nao imprimir asterisco no fim
				printf("*");
		}
		else
		{
			prime ++;
			while (!isprime(prime))
				prime ++;
		}
	}
	printf("\n");
}

int	isprime(int num)
{
	int i = 2;
	int	flag = 0;

	while (i * i < num)
	{
		if (num % i == 0)
			flag = 1;
		i ++;
	}
	if (flag == 1)
		return (0);
	else
		return (1);
}
