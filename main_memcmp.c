#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main(void)
{
    char a1[] = "meybe yes maybe no";
    char a2[] = "meybe yes maybe no";
 
    printf("%d\n", ft_memcmp(a1, a2, 30));
    printf("%d\n", memcmp(a1, a2, 30));
    return (0);
}