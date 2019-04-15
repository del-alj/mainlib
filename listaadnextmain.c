#include "../includes/libft.h"
 #include <stdio.h>
#include <string.h>

 int main()
 {
     t_list  *head;
     t_list  *first;
     t_list  *secnd;

	 head = ft_lstnew("hello flafi", ft_strlen("hello flafi"));
	 first = ft_lstnew("hi flafi", ft_strlen("hi flafi"));
	 secnd = ft_lstnew("flafi", ft_strlen("flafi"));
     ft_lstadd_next(&head,  first);
     ft_lstadd_next(&head,  secnd);
     while (head != NULL)
     {

         printf("%s\n", head->content);
         head = head->next;
     }
     return (0);
 }
