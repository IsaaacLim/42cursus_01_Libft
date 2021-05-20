#include "libft.h"

int		int_len(int n)
{
	int	len;
	
	len = 0;
	if (n < 0)
	{
		len += 1;
		n *= -1;
	}
	while (n >= 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		ilen;
	char	*str;

	ilen = int_len(n);
	str = ft_calloc(ilen + 1, 'a');
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		str[ilen-- - 1] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n >= 0)
	{
		str[ilen-- -1] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}