#include "libft.h"

void	del(void *str, size_t i)
{
	free(str);
	str = NULL;
	i = 0;
}

int		main()
{
	t_list  *head;
	t_list  *current;
	int i;

	i = -1;

//create
	head = ft_lstnew("start", ft_strlen("start"));
	while (++i < 10)
		ft_lstadd_next(&head,  ft_lstnew("loop", ft_strlen("loop")));


	printf("%zu\n" ,ft_lenlist(head));
	ft_lstadd_next(&head,  ft_lstnew("play hard", ft_strlen("play hard")));
	printf("%zu\n" ,ft_lenlist(head));
	ft_lstadd(&head,  ft_lstnew("end", ft_strlen("end")));
	current = head;

//print
	while (current != NULL)
	{
		printf("%s\n", current->content);
		current = current->next;
	}
	current = head;
	while (current->next != NULL)
		current = current->next;
	ft_lstdel(&current, del);
	if (current == NULL)
		printf("abbah\n");
	//current = head;


//print
	while (head->next != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return (0);
}
