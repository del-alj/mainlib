#include <string.h>
#include "../includes/libft.h"
int main()
{
	char str[50] = "This is string.h library function";

	strcpy(str,"This is string.h library function");
	ft_bzero(str, 0);

	bzero(str+6, 5);
	puts(str);
	return (0);
}
