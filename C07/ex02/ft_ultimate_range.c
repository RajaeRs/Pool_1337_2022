/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:08:44 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/14 21:31:11 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*buf;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	buf = malloc(size * sizeof(int));
	if (!buf)
	{
		*range = 0;
		return (-1);
	}
	*range = buf;
	i = 0;
	while (i < size)
	{
		buf[i] = min + i;
		i++;
	}
	return (size);
}
