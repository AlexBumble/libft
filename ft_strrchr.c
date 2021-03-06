/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:13:09 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 12:13:12 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	c_chr;

	i = 0;
	res = NULL;
	c_chr = (char)c;
	while (s[i])
	{
		if (s[i] == c_chr)
			res = (char *)s + i;
		i++;
	}
	if (c_chr == '\0' && s[i] == '\0')
		res = (char *)s + i;
	return (res);
}
