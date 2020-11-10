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

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	c_uc;
	unsigned char	*dst_ucp;
	unsigned char	*src_ucp;

	c_uc = (unsigned char)c;
	dst_ucp = (unsigned char *)dst;
	src_ucp = (unsigned char *)src;
	while(n--)
	{
		*dst_ucp++ = *src_ucp++;
		if (*(dst_ucp - 1) == c_uc)
			return dst_ucp;
	}
	return NULL;
}