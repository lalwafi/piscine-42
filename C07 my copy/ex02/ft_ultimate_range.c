/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:41:51 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/14 20:45:39 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = (int *) malloc((max - min) * sizeof(int));
	if (j == NULL)
	{
		return (-1);
	}
	else
	{
		i = -1;
		while (++i < (max - min))
		{
			j[i] = min + i;
		}
		*range = j;
		return (i);
	}
}

// int main(void)
// {
//     int min = 5;
//     int max = 10;
//     int a = 0;
//     int *x;
//     int sz;
//     sz = ft_ultimate_range(&x, min, max);
//     while ( a < sz)
//     {
//         printf("%d", x[a]);
//         a++;
//     }
//     return (0);
// }
