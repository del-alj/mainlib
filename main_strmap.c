/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:40:35 by del-alj           #+#    #+#             */
/*   Updated: 2019/04/14 22:25:13 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char do_something(char c)
{
	return (c + 1);
}

int		main()
{
	char test[] = "012345678";
	char *test2 = ft_strmap(test, do_something);
	printf("%s\n", test2);
	return (0);
}
