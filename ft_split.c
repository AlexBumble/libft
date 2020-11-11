#include "libft.h"
#include <stdio.h>

static size_t	ft_partscount(char const *s, char c);
static void		ft_dosplit(const char *s, char c, char **res);

char			**ft_split(char const *s, char c)
{
	unsigned int	count;
	char			**res;

	count = ft_partscount(s, c);
	if(count == 0)
		return NULL;
	res = (char **)ft_calloc(count + 1, sizeof(char *));
	if (res != NULL)
	{
		ft_dosplit(s, c, res);
	}
	return res;
}

static size_t	ft_partscount(char const *s, char c)
{
	int		i;
	size_t	flag;
	size_t	partsnum;

	if (!s)
		return 0;
	i = 0;
	flag = 0;
	partsnum = 1;
	while(s[i])
	{
		if (s[i] == c)
			if (flag == 0 && i != 0 && s[i - 1] != c)
				flag = 1;
		if (s[i] != c && flag != 0)
			partsnum += flag--;
		i++;
	}
	return partsnum;
}

static void		ft_dosplit(const char *s, char c, char **res)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;

	i = 0;
	j = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] != c)
			count++;
		if (count > 0 && ((s[i] == c ) || s[i + 1] == '\0'))
		{
			if (s[i] == c)
				start = i - count;
			else
				start = i - count + 1;
			res[j] = ft_substr(s, start,  count);
			j++;
			count = 0;
		}
		i++;
	}
	res[j] = NULL;
}