#include "../includes/libft.h"
#include <stdio.h>
#include <string.h>
int		main()
{
	char       	dest[50] = "Hel";
    char        dest2[50] = "Hel";
    size_t      i, j, k;

	i = 0;
//	dest[50] = "Hel";
//	dest2[50] = "Hel";
     while (i < 6)
     {
         dest[4 + i] = 'z';
         dest2[4 + i] = 'z';
         ++i;
     }

	 printf("strcmp %d\n",strcmp(dest, dest2));
      printf("dst %s ---- dst2 %s\n", dest, dest2);
	 j = strlcat(dest, "abc", 6);
     k = ft_strlcat(dest2, "abc", 6);
     printf("strcmp %d\n",strcmp(dest, dest2));
	printf("j =  %zu ------ k = %zu\n", j, k);
         printf("dst %s ---- dst2%s\n", dest, dest2);
	return (0);
}
