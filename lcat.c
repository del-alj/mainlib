#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[20] = "321654";
	char src[20] = "qwertyu";
	size_t size = 5;
	size_t n;

	n = strlcat(dest, src, size);
	printf("%zu\n", n);
	printf("%s", dest);
	return (0);
}
