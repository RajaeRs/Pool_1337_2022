/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:18:10 by rrasezin          #+#    #+#             */
/*   Updated: 2022/03/31 15:20:37 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap_nbr(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*first;
	int	*last;

	first = tab;
	last = tab + (size - 1);
	if (tab != 0)
	{
		while (last > first)
		{
			swap_nbr(first, last);
			first++;
			last--;
		}
	}
}
