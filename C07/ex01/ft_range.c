/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:05:57 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/14 21:29:41 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buf;

	if (min >= max)
		return (0);
	range = max - min;
	buf = malloc(range * sizeof(int));
	if (!buf)
		return (0);
	i = 0;
	while (i < range)
	{
		buf[i] = min + i;
		i++;
	}
	return (buf);
}
