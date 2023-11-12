#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_rush(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == y && j == x && y > 1 && x > 1))
		ft_putchar('/');
	else if ((i == 1 && j == x) || (i == y && j == 1))
		ft_putchar('\\');
	else if (i == 1 || j == 1 || i == y || j == x)
		ft_putchar('*');
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
