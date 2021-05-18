#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	j;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	while (dst[i])
	{
		i++;
		len++;
	}
	if (dstsize <= i)
		len = len - i + dstsize;
	j = 0;
	while (src[j] && j < (dstsize - i - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}
