#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (s && f)
	{
		str = ft_calloc(ft_strlen(s) + 1, 'a');
		if (!str)
			return (NULL);
		i = -1;
		while (s[++i])
			str[i] = f(i, s[i]);
		return (str);
	}
	return (NULL);
}