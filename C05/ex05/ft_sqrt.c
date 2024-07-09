/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:52:08 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/12 22:28:58 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb / 2 >= i)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%i", ft_sqrt(9));
}