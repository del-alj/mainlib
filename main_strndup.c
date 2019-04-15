#include "../includes/libft.h"
#include <stdio.h>

int		main()
{
	char str[100] = "implicitly declaring library function";
	printf("%s", ft_strndup(str, 10));
	return (0);
}
