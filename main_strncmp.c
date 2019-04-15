#include "../includes/libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
//	size_t size = strlen("the cake is a lie !\0I'm hidden lol\r\n");
    printf("%d", ft_strncmp("\x12\xff\x65\x12\xbd\xde\xad", "\x12\x02", 6));
    return (0);
}
