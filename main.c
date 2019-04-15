#include <stdio.h>

int		main()
{
	char *names[] = {"Miller","Jones","Anderson"};
	printf("%s\n",*(names));
	printf("%s\n",names[1]);

	return (0);
}
