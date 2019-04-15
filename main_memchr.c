#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main(void)
{
    char str[] = "ABDCDEFG";
    char *ps = memchr(str,'D', 10);
       printf ("%s\n", ps); 
    return 0;
}