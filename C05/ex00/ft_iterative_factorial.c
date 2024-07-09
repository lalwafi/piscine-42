/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:09:50 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/07 12:22:46 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	nbb;
	int	i;

	nbb = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= i)
	{
		nbb = nbb * i;
		i++;
	}
	return (nbb);
}

// int	main(void)
// {
// 	int	fact = 4;

// 	printf("%d", ft_iterative_factorial(fact));
// }
