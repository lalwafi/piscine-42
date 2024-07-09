/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:22:57 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/14 16:17:31 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	n;

	n = 0;
	sign = 1;
	while (*str != '\0')
	{
		if (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		if (*str == '-')
		{
			sign *= -1;
		}
		else if ((*str >= '0') && (*str <= '9'))
		{
			while ((*str >= '0') && (*str <= '9'))
			{
				n = n * 10 + (*str - '0');
				str++;
			}
			break ;
		}
		str++;
	}
	return (sign * n);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "   ---++-----+22316ab567";
// 	printf("%d", ft_atoi(str));
// 	return (0);
// }
