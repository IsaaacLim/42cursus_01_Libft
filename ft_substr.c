#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *str;
    size_t          strlen;
    unsigned int    i;

    if (!*s)
        return (NULL);
    strlen = ft_strlen(s);
    if (start >= strlen)
    {
        str = (char *)malloc(sizeof(char) * 1);
        str[0] = '\0';
        return  (str);
    }
    if (len > strlen - start)
        len = strlen - start;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s[start + i] && i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}