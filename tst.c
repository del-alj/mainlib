#include "libft.h"
#include <string.h>

void tst(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

int		main()
{
	char *str;
	str = ft_strdup("qwertyu");
	ft_striter(str, &tst);

	ft_putstr(str);
	return (0);
}
