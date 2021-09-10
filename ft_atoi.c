int	ft_atoi(const char	*nptr)
{
	int	nbr;
	int	sign;

	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	sign = 1;
	if ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			sign = sign * (-1);
		nptr++;
	}
	nbr = 0;
	while ((*nptr >= '0') && (*nptr <= '9'))
	{
		nbr = (nbr * 10) + (*nptr - 48);
		nptr++;
	}
	nbr = nbr * sign;
	return (nbr);
}
