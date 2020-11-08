char *ft_strchr(const char *s, int c)
{
	int i;
	char c_chr;

	i = 0;
	c_chr = (char)c;
	while(s[i])
	{
		if(s[i] == c_chr)
			return (char *)s + i;
		i++;
	}
	if(c_chr == '\0' && s[i] == '\0')
		return (char *)s + i;
	
	return NULL;
}
