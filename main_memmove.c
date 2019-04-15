#include <string.h>
#include <stdio.h>
#include "../includes/libft.h"

int main (void)
{
	char csrc1[100] = "forgekk"; 
	char csrc[100] = "forgekk";
   char s[100] = "00000000000000";	
	memmove(csrc1, s, 2); 
	printf("%s  ",csrc1);

	
  ft_memmove(csrc, s, 2); 
   printf("%s  ", csrc);
	return 0; 
}
