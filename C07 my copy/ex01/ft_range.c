/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:41:48 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/14 20:46:44 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	*j;
	int	k;
	int	l;

	k = 0;
	l = max - min;
	i = ((j = (int *) malloc (l * sizeof(int))));
	if (!i || min >= max)
	{
		return (0);
	}
	while (k < l)
	{
		j[k] = min + k;
		k++;
	}
	return (j);
}
// int main(void)
// {
//     int min = 5;
//     int max = 10;
//     int c = 0;
//     int sz = (max - min);
//     int *x;    
//     x = ft_range(min, max);
//     while (c < sz)
//     {
//         printf("%d", x[c]);
//         c++;
//     }
//     return (0);
// }
