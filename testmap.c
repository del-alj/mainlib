#include "libft.h"
#include <string.h>

char  tst(char c)
{
		c = ft_toupper(c);
	return (c);
}

int		main()
{
	char *str;
	str = ft_strdup("qwertyu");
	str = ft_strmap(str, &tst);

	ft_putstr(str);
	return (0);
}
