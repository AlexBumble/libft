#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t dst_len;
    size_t src_len;
    size_t i;

    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    while(i < (dstsize - 1))
    {
        dst[i + dst_len] = src[i];
        if (++i == (dstsize - 1))
            dst[i + dst_len] = '\0';
    }
    return src_len;
}

// https://github.com/Danilo3/intra_forum/blob/master/libft/strlcat.md