#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	if (s[i] != c && s[i] != '\0')
		word_count = 1;
	else
		word_count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word_count++;
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	int		words;
	int		count;
	int		len;

	words = word_count(s, c);
	arr = (char **)malloc(words * sizeof(char *) + 1);
	if (!arr)
		return (NULL);
	count = 0;
	while (count < words)
	{
		len = 0;
		while (s[len] != c && s[len] != '\0')
			len++;
		if (len)
		{
			str = ft_calloc(len + 1, 'a');
			if (!str)
			{
				free(arr);
				return (NULL);
			}
			arr[count] = ft_memcpy(str, s, len);
			count++;
			s = &s[len];
		}
		while (*s == c)
			s++;
	}
	arr[count] = NULL;
	return (arr);
}
