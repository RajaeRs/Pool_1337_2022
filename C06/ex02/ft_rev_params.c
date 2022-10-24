/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:37:14 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/11 22:01:07 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	if (ac > 1)
	{
		while (av[j] && j > 0)
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				write (1, &av[j][i], 1);
				i++;
			}
			j--;
			write (1, "\n", 1);
		}
	}
	return (0);
}
