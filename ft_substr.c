#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	char *res;
	size_t s_len;
	size_t total_len;

	if (!s)
		return NULL;
	i = -1;
	s_len = ft_strlen(s);
	total_len = s_len >= (start + len + 1) ? len : s_len - start;
	res = malloc(total_len + 1);
	if (start > s_len || res == NULL || total_len == 0)
		return NULL;
	while (++i < (int)total_len)
	{
		res[i] = s[start + i];
		if (i == (int)total_len - 1)
			res[i + 1] = '\0';
	}
	return res;
}
