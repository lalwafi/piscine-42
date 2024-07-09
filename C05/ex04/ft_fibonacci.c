/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:40:25 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/12 15:49:10 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 2)
	{
		i = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_fibonacci(7));
// }