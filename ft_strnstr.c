#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	i = 0;

	while(i <= (int)len && needle[i] && haystack[i])
	{
		if (haystack[i] != needle[i])
			return ft_strnstr(haystack + i + 1, needle, len);
		else if (haystack[i] == needle[i])
			i++;
		
		if (!needle[i] && i < (int)len)
			return (char *)haystack;
	}
	return ft_strlen(needle) == 0 ? (char *)haystack : NULL;
}
