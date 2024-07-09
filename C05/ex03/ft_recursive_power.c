/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:33:36 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/12 15:38:41 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	j;

	j = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		j = nb * ft_recursive_power(nb, (power -1));
	}
	return (j);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_recursive_power(2, 8));
// }