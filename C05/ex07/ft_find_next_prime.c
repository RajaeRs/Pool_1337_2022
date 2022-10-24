/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:04:33 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/12 12:19:16 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	m;

	m = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (m < (nb / 2))
	{
		if ((nb % m == 0) && nb != m)
			return (0);
		else
			m++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		nb = nb + 1;
		while (ft_is_prime(nb) == 0)
			nb++;
	}
	return (nb);
}
