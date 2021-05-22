#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "old";
	char *s2 = "new";
	char *s3 = "back";

	t_list *root = ft_lstnew(s1);
	ft_lstadd_front(&root, ft_lstnew(s2));
	ft_lstadd_back(&root, ft_lstnew(s3));
	while(root)
	{
		printf("%s\n", (char *)root->content);
		root = root -> next;
	}
	free(root);
}