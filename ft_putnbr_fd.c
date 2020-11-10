#include <unistd.h>

static size_t	rec_int_print(char *out, int n);
static size_t	rec_print(char *out, long long unsigned int n);

void			ft_putnbr_fd(int n, int fd)
{
	char	res[12];
	size_t	len;

	len = rec_int_print(res, n);
	write(fd, res, len);
}

static size_t	rec_int_print(char *out, int n)
{
	size_t	i;

	if (n < 0)
	{
		*out = '-';
		i = rec_print(out + 1, (long long unsigned)-(long long)n);
		i += 1;
	}
	else
		i = rec_print(out, n);
	out[i] = '\0';
	return (i);
}

static size_t	rec_print(char *out, long long unsigned int n)
{
	size_t	i;

	i = 0;
	if (n > 9)
		i = rec_print(out, n / 10);
	out[i] = (n % 10) + '0';
	return (i + 1);
}