/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:04:28 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 12:04:31 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_chr;

	i = 0;
	c_chr = (char)c;
	while (s[i])
	{
		if (s[i] == c_chr)
			return ((char *)s + i);
		i++;
	}
	if (c_chr == '\0' && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}
