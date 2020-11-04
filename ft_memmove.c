void *ft_memmove(void *dst, const void *src, size_t len)
{
    if (!dst && !src)
        return dst;

    unsigned char *dst_ucp;
    unsigned char *src_ucp;

    dst_ucp = (unsigned char *)dst;
    src_ucp = (unsigned char *)src;
    while(len--)
    {
        dst_ucp[len] = src_ucp[len];
    }
    return dst;
}