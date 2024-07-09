/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:41:45 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/14 20:47:22 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*a;
	char	*b;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(src);
	a = ((b = (char *)malloc(j * sizeof(char) + 1)));
	if (!a)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		b[i] = src[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}

// int main(void)
// {
// 	char *a;
// 	char *b;

// 	a = "sumaya";
// 	b = ft_strdup(a);
// 	printf("%p\n", a);
// 	printf("%p", b);
// 	return (0);
// }
