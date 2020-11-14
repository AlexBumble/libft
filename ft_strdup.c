/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:05:19 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 12:05:21 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	total;

	total = ft_strlen(s1) + 1;
	res = malloc(total);
	if (res != NULL)
		res = (ft_memcpy(res, s1, total));
	return (res);
}
