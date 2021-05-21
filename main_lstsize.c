#include "libft.h"
#include <stdio.h>

int	main (void)
{
	char *s1 = "old";
	char *s2 = "new";
	char *s3 = "lastest";

	t_list *root = ft_lstnew(s1);
	
	ft_lstadd_front(&root, ft_lstnew(s2));
	ft_lstadd_front(&root, ft_lstnew(s3));

	int lst_count = ft_lstsize(root);
	printf("List count: %d\n", lst_count);
	free(root);
}