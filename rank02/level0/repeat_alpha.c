/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nataliaschardosim <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:38:42 by nataliaschard     #+#    #+#             */
/*   Updated: 2024/09/05 11:38:44 by nataliaschard    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ischar(char ch);

int	main(int argc, char **argv)
{
	int	i;
	int	ch;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			ch = (int)argv[1][i] - ft_ischar(argv[1][i]);
			if (ft_ischar(argv[1][i]) != 1)
			{
				while (ch > 0)
				{
					write(1, &argv[1][i], 1);
					ch --;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}

int	ft_ischar(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (96);
	else if (ch >= 'A' && ch <= 'Z')
		return (64);
	else
		return (1);
}
