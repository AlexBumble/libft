/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 10:35:38 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 10:36:38 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isemptysapce(const char chr)
{
	return ((chr == '\n') || (chr == '\t') || (chr == '\r') ||
			(chr == ' ') || (chr == '\f') || (chr == '\v'));
}

static	int	ft_doatoi(const char *str, int i, int sign)
{
	long long int	res;
	long long int	max;

	res = 0;
	max = 922337203685477580;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (res > max || (res == max && (str[i] - '0') >= 8))
			return (sign == 1 ? -1 : 0);
		res = res * 10 + (str[i++] - '0');
	}
	return ((int)res * sign);
}

int			ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (ft_isemptysapce(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	return (ft_doatoi(str, i, sign));
}
