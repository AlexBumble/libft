/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:23:28 by jbane             #+#    #+#             */
/*   Updated: 2020/10/28 16:23:29 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int 			i;
	unsigned char	*dst_ucp;
	unsigned char	*src_ucp;

	i = -1;
	dst_ucp = (unsigned char *)dst;
	src_ucp = (unsigned char *)src;
	if (dst_ucp || src_ucp)
		while(++i < (int)n)
			dst_ucp[i] = src_ucp[i];
	return dst;
}
