/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_all_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:13:17 by del-alj           #+#    #+#             */
/*   Updated: 2019/04/19 13:10:40 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_list		*tstlst(t_list *elem)
{
	t_list *map;
	map = elem;
	if (ft_lenlist(elem) <=  3)
	{
		printf("oky\n");
		return (NULL);
	}
	else
	{
		elem->content = (void*)strdup("ab");
		elem->content_size = strlen((char*)elem->content);
	}
	return (map);
}

int		main()
{
	t_list *head;
	t_list *add;
	t_list *rass;
	t_list *cp;

	int r;
	char str[10] = "play hard";
	char str1[10] = "ploy hard";
	r = 0;
	rass = ft_lstnew(str, strlen(str));	

	head = rass;

	add = ft_lstnew(str1, strlen(str1));;
		printf("%s\n%zu\n", head->content,head->content_size);
	/*print result of lstnew*/
	while (r < 5)
	{
		head->next = ft_lstnew(str, strlen(str));	
		head = head->next;
			printf("%s\n%zu\n", head->content,head->content_size);
		r++;
	}

	head->next = NULL;
	t_list *map;

	ft_lstadd(&rass, add);
	/*print result of lstadd*/
		head = rass;
		while (head != NULL)
		{
		printf("%s\n", head->content);
		head = head->next;
		}

	map = ft_lstmap(rass, &tstlst);
	printf("\n\n\n\n\n\n\n");
	printf("end");
	/*print result of lstmap*/
	while (map != NULL)
	{
		printf("%s\n", map->content);
		printf("%zu\n", map->content_size);
		map = map->next;
	}
	return (0);
}

