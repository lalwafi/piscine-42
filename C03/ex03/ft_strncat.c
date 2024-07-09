/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:55:37 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/06 13:21:18 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	i;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[x] != '\0') && (nb > x))
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	a[20] = "helloo ";
// 	char	b[10] = "everybody";

// 	printf("%s", ft_strncat(a, b, 5));
// }
