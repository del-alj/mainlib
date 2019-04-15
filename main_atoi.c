#include "../libft/includes/libft.h"
#include <stdio.h>

int main()
{
	printf("|%d|\n", atoi("ab1"));
    printf("|%d|\n", ft_atoi("ab1"));
    printf("|%d|\n", atoi("--1"));
    printf("|%d|\n", ft_atoi("--1"));
    printf("|%d|\n", atoi("+-1"));
    printf("|%d|\n", ft_atoi("+-1"));
    return (0);
}
