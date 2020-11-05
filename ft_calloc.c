#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *mem_ptr;
    size_t total;

    total = count * size;
    mem_ptr = malloc(toalloc);
    if (total != 0 && mem_ptr != NULL)
        ft_bzero(mem_ptr, total);
    return  mem_ptr;
}