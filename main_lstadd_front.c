#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "old";
	char *s2 = "new";
	char *s3 = "lastest";

	t_list	*root = ft_lstnew(s1);
	t_list	*new = ft_lstnew(s2);
	t_list	*lastest= ft_lstnew(s3);

	ft_lstadd_front(&root, new);
	ft_lstadd_front(&root, lastest);
	while(lastest != NULL)
	{
		printf("%s\n", (char *)lastest->content);
		lastest = lastest -> next;
	}
	free(new);
	free(root);
	free(lastest);
}