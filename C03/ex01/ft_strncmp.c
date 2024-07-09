/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:55:06 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/06 12:10:15 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0') && (n > i))
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

// int	main(void)
// {
// 	char	*a = "H1ello everybody, my name is Markiplier";
// 	char	*b = "Hello everybody, my name is";

// 	printf ("%d", ft_strncmp(a, b, 1));
// }
