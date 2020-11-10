#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	r_len;

	if (!s)
		return NULL;
	s_len = ft_strlen(s);
	r_len = s_len - start < len ? s_len - start : len;
	r_len = r_len < 0 ? 0 : len;
	res = malloc(len + 1);
	if (res != NULL)
		s = s + (s_len < start ? s_len : start);
		ft_strlcpy(res, s, r_len + 1);
	return res;
}
