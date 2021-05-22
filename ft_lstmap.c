#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while(lst)
	{
		if (!(temp = ft_lstnew((*f)(lst -> content))))
			ft_lstadd_back(&new, temp);
		else
		{
			while (new)
			{
				temp = new -> next;
				(*del)(new -> content);
				free(new);
				new = temp;
			}
			lst = NULL;
			return (NULL);
		}
		lst = lst -> next;
	}
	return (new);
}
