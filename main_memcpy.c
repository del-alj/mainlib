#include <string.h>
#include "../includes/libft.h"
#include <stdio.h>
int main () {
	const char src[50] = "hihaakkkkkkkaa";
	char dest[] = "Hellooo!!";
	char dest1[]= "Hellooo!!";
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest + 1, dest, 4);
	memcpy(dest1 + 1, dest1, 4);
	printf("After memcpy dest = %s %s\n", dest, dest1);

	return(0);
}
