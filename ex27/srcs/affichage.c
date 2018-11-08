#include <unistd.h>

void	ft_putchar_Error(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_Error(str[i]);
		i++;
	}
}
