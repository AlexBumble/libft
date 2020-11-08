/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:53:33 by jbane             #+#    #+#             */
/*   Updated: 2020/10/28 16:53:36 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	int i;
	unsigned char c_uc;
	unsigned char *dst_ucp;
	unsigned char *src_ucp;

	i = -1;
	dst_ucp = (unsigned char *)dst;
	src_ucp = (unsigned char *)src;
	while(++i < n)
	{
		dst_ucp[i] = src_ucp[i];
		if (dst_ucp[i] == c_uc)
			return dst;
	}
	return NULL;
}
