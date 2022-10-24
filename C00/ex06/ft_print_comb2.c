/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:35:17 by rrasezin          #+#    #+#             */
/*   Updated: 2022/03/26 16:19:17 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char n)
{
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			print_num(f / 10 + '0');
			print_num(f % 10 + '0');
			print_num(' ');
			print_num(s / 10 + '0');
			print_num(s % 10 + '0');
			if (f != 98)
			{
				print_num(',');
				print_num(' ');
			}
			s++;
		}
		f++;
	}
}
