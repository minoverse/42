int	ft_atoi(char *str)
{
	int	sign;
	int	num;
	int	i;

	i = 0;
    num = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] = 32)
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
    }
    return (num);
}
