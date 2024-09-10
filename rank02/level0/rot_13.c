/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nataliaschardosim <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:51:57 by nataliaschard     #+#    #+#             */
/*   Updated: 2024/09/10 11:22:40 by nataliaschard    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char ch);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (ft_isalpha(argv[1][i]) == 1)
				argv[1][i] = (argv[1][i] + 13 - 'a') % 26 + 'a';
			else if (ft_isalpha(argv[1][i]) == 2)
				argv[1][i] = (argv[1][i] + 13 - 'A') % 26 + 'A';
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}

int	ft_isalpha(char ch)
{
	if (ch >= 'a' && ch <= 'z') 
		return (1);
	if (ch >= 'A' && ch <= 'Z')
		return (2);
	return (0);
}
