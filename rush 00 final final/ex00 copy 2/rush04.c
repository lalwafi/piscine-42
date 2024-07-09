/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:58:15 by lalwafi           #+#    #+#             */
/*   Updated: 2023/10/28 15:58:19 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

int	g_i;
int	g_j;
int	g_k;

void	first_row(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		g_i = x - 2;
	}
	while (g_i > 0 && x > 0 && y > 0)
	{
		ft_putchar('B');
		g_i--;
	}
	if (x > 1 && y > 0)
	{
		ft_putchar('C');
	}
	if (x > 0)
	{
		ft_putchar('\n');
	}
	g_j = y - 2;
}

void	middle_row(int x, int y)
{
	while (g_j > 0)
	{
		if (x > 0 && y > 0)
		{
			ft_putchar('B');
			g_k = x - 2;
		}
		while (g_k > 0 && x > 0 && y > 0)
		{
			ft_putchar(' ');
			g_k--;
		}
		if (x > 1 && y > 0)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		g_j--;
	}
}

void	last_row(int x, int y)
{
	int	g_l;

	if (x > 0 && y > 1)
	{
		ft_putchar('C');
		g_l = x - 2;
	}
	while (g_l > 0 && x > 0 && y > 1)
	{
		ft_putchar('B');
		g_l--;
	}
	if (x > 1 && y > 1)
	{
		ft_putchar('A');
	}
	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x >= 0 && y >= 0)
	{
		first_row(x, y);
		middle_row(x, y);
		last_row(x, y);
	}
	else
	{
		write(1, "error: please use positive integers.\n", 37);
	}
}
