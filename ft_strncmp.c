#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && --n)
	{
		s1++;
		s2++;
	}
	if (n > 0)
		return (int)(unsigned char)*s1 - (int)(unsigned char)*s2;
	return 0;
}
