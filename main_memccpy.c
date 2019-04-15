#include <string.h>
#include <stdio.h>
#include "../includes/libft.h"

int main () {
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[] = "hellooo!!";
	char dest1[]= "hellooo!!";
	puts(dest);
	ft_memccpy(dest, src, 'o', 5);
	memccpy(dest1, src, 'o', 5);
	puts(dest);
	puts(dest1);

	return(0);
}