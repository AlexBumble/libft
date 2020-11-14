/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:13:46 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 12:13:48 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (i < len && (res = ft_strchr(set, s1[i])) != NULL)
		i++;
	s1 += i;
	len -= i;
	i = 0;
	while (i < len && (res = ft_strchr(set, s1[len - i - 1])) != NULL)
		i += 1;
	res = malloc(len + 1 - i);
	if (res != NULL)
		ft_strlcpy(res, s1, len + 1 - i);
	return (res);
}
