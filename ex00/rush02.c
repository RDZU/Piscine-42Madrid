#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_rush(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == 1 && j == x))
		ft_putchar('A');
	else if ((i == x && j == 1) || (i == y && j == x))
		ft_putchar('C');
	else if (i == 1 || j == 1 || i == y || j == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		write(1, "Error se ha recibido algun parametro incorrecto!", 48);
	else
	{
		while (++i <= y)
		{
			j = 0;
			while (++j <= x)
			{
				ft_print_rush(x, y, i, j);
			}
			ft_putchar('\n');
		}
	}
}