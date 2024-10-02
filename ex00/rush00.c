/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:40:58 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/03 00:03:58 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if ((c == 0 && l == 0) || (c == x - 1 && l == y - 1))
				ft_putchar('/');
			else if ((c == x - 1 && l == 0) || (c == 0 && l == y - 1))
				ft_putchar('\\');
			else if ((l == 0 || l == y - 1) || (c == 0 || c == x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
