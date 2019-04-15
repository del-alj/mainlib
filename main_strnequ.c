#include "../includes/libft.h"
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_strnequ(NULL, NULL, 0));
	printf("%d\n", ft_strnequ(NULL, NULL, 1));
	printf("%d\n", ft_strnequ(NULL, "", 1));
	printf("%d\n", ft_strnequ("", NULL, 1));

	return (0);
}
