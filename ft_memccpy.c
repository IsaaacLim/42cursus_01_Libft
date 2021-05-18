#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (n-- > 0)
	{
		*d++ = s[i];
		i++;
		if (s[i - 1] == (unsigned char)c)
			return (dst + i);
	}
	return (NULL);
}
