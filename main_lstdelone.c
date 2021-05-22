#include "libft.h"
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	char *s1 = "first";
	char *s2 = "second";
	char *s3 = "third";

	t_list *root = ft_lstnew(s1);
	t_list *second = ft_lstnew(s2);
	t_list	*third = ft_lstnew(s3);
	ft_lstadd_back(&root, second);
	ft_lstadd_back(&root, third);

	t_list *root2;
	root2 = root -> next;

	ft_lstdelone(root, &del);
	/*if(!(root->content))
		printf("First element deleted\n");
	else
		printf("First element still there: %s\n", (char *)root ->content);
*/
	//while(root2)
	//{
	//	printf("%s ", (char *)root2->content);
	//	root2 = root2 -> next;
	//}
	free(root);
	free(second);
	free(third);
	free(root2);
}