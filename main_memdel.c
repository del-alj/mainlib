#include "../includes/libft.h"
#include <stdio.h>

int		main()
{
	char **str;

	*str = ft_strdup("hello flafi");

	printf("%s\n", *str);
	ft_memdel(str);
	printf("%s\n", *str);
	return (0);
}
