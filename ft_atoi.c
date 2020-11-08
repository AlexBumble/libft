static int ft_isemptysapce(const char chr);
static int ft_doatoi(const char *str, int i, int sing);

int ft_atoi(const char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (ft_isemptysapce(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	return ft_doatoi(str, i, sign);
}

static int ft_isemptysapce(const char chr)
{
	return ((chr == '\n') || (chr == '\t') || (chr == '\r') ||
			(chr == ' ') || (chr == '\f') || (chr == '\v'));
}

static int ft_doatoi(const char *str, int i, int sign)
{
	long long int res;

	res = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (res > 922337203685477580 || (res == 922337203685477580 && (str[i] - '0') >= 8))
			return sign == 1 ? -1 : 0;
		res = res * 10 + (str[i++] - '0');
	}
	return (int)res * sign;
}
