#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
