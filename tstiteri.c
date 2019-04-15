#include "libft.h"
#include <string.h>

void tst(unsigned int i, char *str)
{
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

int		main()
{
	char *str;
	str = ft_strdup("qwertyu");
	ft_striteri(str, &tst);

	ft_putstr(str);
	return (0);
}
