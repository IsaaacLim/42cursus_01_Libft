#include "libft.h"
#include "stdio.h"//remove

int word_count(char const *s, char c)
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
	printf("i:%d - %d\n", i, word_count);
	return (word_count);
}

//change function
void ft_split(char const *s, char c)
{
	int		words;
//	char	**arr;
//	char	*str;
	int len;
//	char dsize;
//	dsize = a;

	words = word_count(s, c);
//	arr = (char **)malloc(words * sizeof(char *) + 1);
//	if (!arr)
//		return (NULL);
	int count;
	count = 0;
	while (count < words)
	{
		len = 0;
		while (s[len] != c && s[len] != '\0')
			len++;
//		if (len)
//		{
//			str = ft_calloc(len, dsize); //inlcuded + 1
//			if (!str)
//			{
//				free(arr);
//				return (NULL);
//			}
//			arr[count] = ft_strlcpy(str, s, len);
			count++;
			s = &s[len];
//		}
		while (*s == c)
			s++;
	
	}
			printf("countM: %d\n", count);
	//return (arr);
}

int main ()
{
	char *word = "ZIsaacZIsaacZIsaacZ";
	char deli = 'Z';
	ft_split(word, deli);
	//free(ft_split(word, deli));
}
