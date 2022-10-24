/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:14:27 by khaimer           #+#    #+#             */
/*   Updated: 2022/03/27 23:10:14 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printo(int l, int c, int i, int j)
{
	if ((i == 1 && j == 1) || (c == i && l == j && j > 1 && i > 1))
		ft_putchar('A');
	else if ((i == c && j == 1) || (i == 1 && j == l))
		ft_putchar('C');
	else if (i != 1 && j != 1 && c != i && l != j)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i++ < y)
	{
		while (j++ < x)
		{
			printo(x, y, i, j);
		}
		ft_putchar('\n');
		j = 0;
	}
}
