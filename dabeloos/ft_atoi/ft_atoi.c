int		ft_atoi(const char *str)
{
	int		i;
	int		j;
	int		sign;
	int		result;
	int		imax;
	int		imin;
	int		start;
	int		number[10];
	int		error;

	imax = 147483647;
	imin = -147483648;
	result = 0;
	start = 0;
	sign = 1;
	i = 0;
	j = 0;
	error = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) != ' ' && start == 0) || start == 1)
		{
			if (*(str + i) == '-' && start == 0)
				sign = -1;
			else if ((*(str + i) >= '0' && *(str + i) <= '9') && j < 10)
			{
				number[j] = *(str + i) - '0';
				j++;
			}
			else if (!(*(str + i) == '+' && start == 0))
			{
				result = 0;
				error = 1;
				break;
			}
			if (start == 0)
				start = 1;
		}
		i++;
	}
	if (error == 0)
	{
		i = 1;
		j = j - 1;
		while (j >= 0)
		{
			if (j == 0 && number[j] >= 2 && ((sign == 1 && result > imax) || (sign == -1 && result < imin)))
			{
				result = 0;
				break;
			}
			result += number[j] * i * sign;
			i *= 10;
			j--;
		}
	}
	return (result);
}
