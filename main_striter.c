/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:25:28 by del-alj           #+#    #+#             */
/*   Updated: 2019/04/14 21:36:11 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void do_something(char *s)
{
	  printf("s: '%s'\n", s);
}

int main()
{
	  char test[] = "Hello World.";
	    ft_striter(test, &do_something);
		  /* done */
		  return 0;
}
