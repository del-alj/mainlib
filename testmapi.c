#include "libft.h"
#include <string.h>

char  tst(unsigned int i, char c)
{
	if(i > 1)
		c = ft_tolower(c);
	else
	c = ft_toupper(c);
	return (c);
}

int		main()
{
	char *str;
	str = ft_strdup("qwertyu");
	str = ft_strmapi(str, tst);

	ft_putstr(str);
	return (0);
}
