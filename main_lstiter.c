#include "libft.h"
#include <stdio.h>

void	capitalize_odd(void *s)
{
	for (int i = 0; (char)s[i]; i++)
	{
		if (i % 2 == 1 && ((char)s[i] >= 'a' && (char)s[i] <= 'z'))
				(char)s[i] -= '0';
	}
}

int	main(void)
{
	char *s1 = "abcedfghijklmonp";
	t_list *root = ft_lstnew(s1);

	ft_lstiter(root, &capitalize_odd);

	free(root);
}