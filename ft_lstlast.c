#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
	else if (lst->next == NULL)
		return lst;
	else
		return ft_lstlast(lst->next);
}