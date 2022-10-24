/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:00:55 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/12 12:23:51 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	base;
	int	result;
	int	m;

	base = 2;
	result = 4;
	m = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (base <= 46340 && m <= (nb / 2))
	{
		if (nb == result)
			return (base);
		else
			base ++;
		result = base * base;
		m++;
	}
	return (0);
}
