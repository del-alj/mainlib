#include "../includes/libft.h"

void    ft_print(void *ptr, int idx);
int		main()
{
	int a = 3;
	ft_print(&a, 0);
	ft_putchar('\n');
	ft_print("hehoo", 1);

	return (0);
}
