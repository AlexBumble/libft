/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:51:14 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 11:51:20 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			direction;
	const void	*end;
	void		*d;

	d = dst;
	if (dst != src)
	{
		direction = (dst < src) * 2 - 1;
		end = (unsigned char *)src + (long long int)len * direction;
		if (direction < 0)
		{
			end = (unsigned char *)src - 1;
			src = (unsigned char *)src + (long long int)len - 1;
			dst = (unsigned char *)dst + (long long int)len - 1;
		}
		while (src != end)
		{
			*(unsigned char *)dst = *(unsigned char *)src;
			dst = (unsigned char *)dst + direction;
			src = (unsigned char *)src + direction;
		}
	}
	return (d);
}
