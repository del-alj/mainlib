
#include "libft.h"

size_t		ft_lenlist(t_list *list)
{
	size_t	i;
	t_list	node;

	i = 0;
	if (list)
	{
		node = list;
		while (node != NULL && i++)
			node = node->next;
	}
	return (i);
}

int		main()
{
	t_list hope;
	t_list smile;
	t_list happy;
	
	hope.next = smile;
	smile.next = happy;
	happy.next = NULL;
	ft_putnbr(ft_lenlist(hope));
	return (0);
}
