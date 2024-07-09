/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:36:31 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/12 15:32:47 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	j = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > i)
	{
		j *= nb;
		i++;
	}
	return (j);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_iterative_power(5, 7));
// }