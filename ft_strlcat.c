#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = dst_len > dstsize ? dstsize : dst_len;
	if (dstsize && i < dstsize - 1)
		i += ft_strlcpy(dst + i, src, dstsize - i);
	else
		i += ft_strlen(src);
	return i;
}
