#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>


int main()
{
    char dest[50] = "Using strncat function,";
    char src[50] = " this part is added and this is ignored";

    printf("%s", ft_strncat(dest, src, 19));

    return 0;

}