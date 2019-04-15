#include <string.h>
#include <stdio.h>
#include "../includes/libft.h"

int main(void) {
	printf("found: %s\n", ft_strnstr("searchingFor", "chi", 4));
	printf("found: %s\n", strnstr("searchingFor", "chi", 4));
	printf("found: %s\n", strnstr("in", "searchingFor", 5) ? "yes" : "no");
	return 0;
}
