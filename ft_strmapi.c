#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return NULL;
	len = ft_strlen(s);
	res = malloc(len + 1);
	i = 0;
	if (res != NULL)
	{
		while (i < len) {
			res[i] = f(i, s[i]);
			i++;
		}
		res[len] = '\0';
	}
	return res;
}
