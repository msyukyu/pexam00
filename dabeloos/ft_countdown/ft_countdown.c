#include <unistd.h>

void	ft_desc_numbers(void)
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = '9' - i;
		write(1, &c, 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
}

int		main(void)
{
	ft_desc_numbers();
	return (0);
}
