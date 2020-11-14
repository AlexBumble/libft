/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 10:48:01 by jbane             #+#    #+#             */
/*   Updated: 2020/11/14 10:48:04 by jbane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem_ptr;
	size_t	total;

	total = count * size;
	mem_ptr = malloc(total);
	if (total != 0 && mem_ptr != NULL)
		ft_bzero(mem_ptr, total);
	return (mem_ptr);
}
