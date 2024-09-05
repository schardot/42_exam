/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nataliaschardosim <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:18:18 by nataliaschard     #+#    #+#             */
/*   Updated: 2024/09/05 16:20:22 by nataliaschard    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getlen(int start, int end);

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*array;

	len = ft_getlen(start, end);
	array = (int *)malloc(len * sizeof(int));
	i = 0;
	if (start < end)
	{
		while (start + i <= end)
		{
			array[i] = start + i;
			i ++;
		}
	}
	else
	{
		while (start - i >= end)
		{
			array[i] = start - i;
			i ++;
		}
	}
	return (array);
}

int	ft_getlen(int start, int end)
{
	int	i;

	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			start ++;
			i ++;
		}
	}
	else
	{
		while (start >= end)
		{
			start --;
			i ++;
		}
	}
	return (i);
}
