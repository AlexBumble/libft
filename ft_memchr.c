void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *s_ucp;
	unsigned char c_uc;

	i = -1;
	s_ucp = (unsigned char *)s;
	c_uc = (unsigned char)c;
	while(++i < n)
		if(s_ucp[i] == c_uc)
			return (void *)s_ucp + i;
	
	return NULL;
}
