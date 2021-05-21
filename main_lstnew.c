#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *s = "HELLO THERE";
	t_list	*new = ft_lstnew(s);

	printf("%s\n", (char *)new->content);
	free(new);
}