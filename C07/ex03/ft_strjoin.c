/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:21:52 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/14 21:22:21 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		x;
	int		y;
	int		ip;

	p = malloc(sizeof(strs));
	x = 0;
	ip = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
			p[ip++] = strs[x][y++];
		y = 0;
		while (sep[y] != '\0' && x != size - 1)
			p[ip++] = sep[y++];
		x++;
	}
	p[ip] = '\0';
	return (p);
}
