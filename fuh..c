#include <stdio.h>
void	ft_swapchar(char *a, char *b)
{
	char ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}
int main()
{
	char s1[] = "abc";
	char s2[] = "def";
	ft_swapchar(s1,s2);
	printf("%s %s",s1,s2);

	return 0;
}
