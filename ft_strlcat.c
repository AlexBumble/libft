/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:06:51 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 12:06:52 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = dst_len > dstsize ? dstsize : dst_len;
	if (dstsize && i < dstsize - 1)
		i += ft_strlcpy(dst + i, src, dstsize - i);
	else
		i += ft_strlen(src);
	return (i);
}
