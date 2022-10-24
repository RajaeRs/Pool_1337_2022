/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 02:55:58 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/12 03:45:21 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	m;
	int	save;

	m = 1;
	save = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (m < power)
	{
		nb = save * nb;
		m++;
	}
	return (nb);
}
