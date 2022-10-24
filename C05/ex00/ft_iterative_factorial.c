/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:56:31 by rrasezin          #+#    #+#             */
/*   Updated: 2022/04/12 12:22:14 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		while (nb > 1)
		{
			num = num * (nb - 1);
			nb--;
		}
		return (num);
	}
	else
		return (1);
}
