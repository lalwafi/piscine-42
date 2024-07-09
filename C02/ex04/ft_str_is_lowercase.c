/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:17:06 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/01 20:18:56 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
// 	printf("%d", ft_str_is_lowercase(a));
// 	return (0);
// }