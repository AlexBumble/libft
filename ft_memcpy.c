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

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
   int i;
   unsigned char *dst_ucp;
   unsigned char *src_ucp;

   i = -1;
   dst_ucp = (unsigned char *)dst;
   src_ucp = (unsigned char *)src;
   while(++i < n)
   {
     dst_ucp[i] = src_ucp[i];
   }
   return dst;
}
