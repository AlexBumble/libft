/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:11:58 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 12:12:04 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*res;
	size_t	n_len;

	res = (char *)haystack;
	if (*needle != '\0')
	{
		res = NULL;
		n_len = ft_strlen(needle);
		while (*haystack != '\0' && res == NULL && len >= n_len)
		{
			if (*haystack == *needle
				&& ft_strncmp(haystack, needle, n_len) == 0)
				res = (char *)haystack;
			len--;
			haystack++;
		}
	}
	return (res);
}
