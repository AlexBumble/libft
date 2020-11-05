#include "libft.h"

static int ft_contains(char const *set, char const c);

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len;
    char *res;
    int i;
    int j;

    if (!s1)
        return NULL;
    len = ft_strlen(s1);
    if (ft_strlen(set) == 0 || len == 0)
        return (char *)s1;
    res = malloc(len + 1);
    i = -1;
    j = -1;
    while (++i < len)
    {
        if (ft_contains(set, s1[i]) == 0)
            res[++j] = s1[i];
        if (i + 1 == len)
            res[++j] = '\0';
    }
    return res;
}

static int ft_contains(char const *set, char const c)
{
    int i;

    if (!set && !c)
        return 0;
    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return 1;
        i++;
    }
    return 0;
}