#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == 'z')
			{
				write(1, &av[1][i], 1);
				break ;
			}
			else
			{
				write(1, "z", 1);
				break ;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
