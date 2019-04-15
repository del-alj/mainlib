#include "../includes/libft.h"
#include <stdio.h>

int		main()
{
	int	i;
	int j;
	char *str = "            ";
	char **tab;
	tab = ft_strsplit(str, ' ');

	i = 0;
	while (tab[i])	
	{
			printf("|%s|\n", tab[i]);
		i++;	
	}
	return (0);
}
