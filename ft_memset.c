/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:33:01 by jbane             #+#    #+#             */
/*   Updated: 2020/10/28 15:33:03 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	int i;
	unsigned char c_uc;
	unsigned char *b_ucp;
	
	i = -1;
	c_uc = (unsigned char)c;
	b_ucp = (unsigned char *)b;
	while(++i < (int)len)
		b_ucp[i] = c_uc;
	
	return b;
}
