#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	a;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				a = 1 * (av[1][i] - 'a' + 1);
				while (a > 0)
				{
					write(1, &av[1][i], 1);
					a--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				a = 1 * (av[1][i] - 'A' + 1);
				while (a > 0)
				{
					write(1, &av[1][i], 1);
					a--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
