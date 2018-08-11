#include <unistd.h>

void	ft_rev_alph(void)
{
	char	c;
	int		i;
	int		maj;

	maj = 0;
	i = 0;
	while (i < 26)
	{
		c = 'z' - i + (maj * ('Z' - 'z'));
		write(1, &c, 1);
		i++;
		maj = i % 2;
	}
	c = '\n';
	write(1, &c, 1);
}

int		main(void)
{
	ft_rev_alph();
	return (0);
}
