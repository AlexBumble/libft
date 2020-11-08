#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
	char *res;
	size_t total;

	total = ft_strlen(s1) + 1;
	res = malloc(total);
	if (res != NULL)
		res = ft_memcpy(res, s1, total);
	return res;
}

