#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *s1_ucp;
	unsigned char *s2_ucp;

	i = -1;
	s1_ucp = (unsigned char *)s1;
	s2_ucp = (unsigned char *)s2;
	while(++i < (int)n)
		if(s1_ucp[i] != s2_ucp[i])
			return s1_ucp[i] - s2_ucp[i];
	
	return 0;
}
