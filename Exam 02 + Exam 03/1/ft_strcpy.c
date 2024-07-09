char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	a[] = "aaaaa";
// 	char	b[] = "bbbbb";
// 	printf("%s\n", a);
// 	printf("%s\n", b);
// 	ft_strcpy(a, b);
// 	printf("%s\n", a);
// 	printf("%s\n", b);
// }