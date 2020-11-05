#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1;
    size_t len_s2;
    char *res;

    if (!s1 && !s2)
        return NULL;
    else if (!s1)
        return (char *)s2;
    else if (!s2)
        return (char *)s1;
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    res = malloc(len_s1 + len_s2 + 1);
    if (res != NULL)
    {
        ft_strlcpy(res, s1, len_s1 + 1);
        ft_strlcpy(res + len_s1, s2, len_s2 + 1);
    }
    return res;
}
