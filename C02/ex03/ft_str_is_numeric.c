/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:56:10 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/01 20:16:08 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
		}
		else
		{
			i = 0;
			break ;
		}
	}
	return (i);
}

// int	main(void)
// {
// 	char	a[] = "fcfgcjf";
// 	printf("%d", ft_str_is_numeric(a));
// 	return (0);
// }
