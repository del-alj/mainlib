/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 18:22:08 by del-alj           #+#    #+#             */
/*   Updated: 2019/04/20 18:37:38 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../includes/libft.h"
//#include "ft_get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	fd;
		char c;

		fd = open(argv[1], O_RDONLY);
		Read(fd, &c, 1);
		printf(%c, c);
	}
	return (0);
}
