/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:41:57 by lalwafi           #+#    #+#             */
/*   Updated: 2023/11/14 20:45:43 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	char	*str;

	str = malloc(sizeof(strs));
	len = 0;
	i = 0;
	while (len < size)
	{
		j = 0;
		while (strs[len][j] != '\0')
		{
			str[i++] = strs[len][j++];
		}
		j = 0;
		while (sep[j] != '\0' && len != size - 1)
		{
			str[i++] = sep[j++];
		}
		len++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
//     char    **str;
//     char    *sep;
//     char    *a;
//     int     sz;

//     sz = 3;
//     str = (char **)malloc(3 * sizeof(char *));
//     str[0] = (char *)malloc(sizeof(char) * 6 + 1);
//     str[1] = (char *)malloc(sizeof(char) * 4 + 1);
// 	str[2] = (char *)malloc(sizeof(char) * 5 + 1);
// 	str[0] = "Sumaya";
// 	str[1] = "Omar";
// 	str[2] = "Ahmed";
// 	sep = " ";
// 	a = ft_strjoin(sz, str, sep);
// 	printf("%s$\n", a);
// 	free(a);
// }
