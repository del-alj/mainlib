#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main () 
{
   char str[] = "http://www.tutorialspoint.com";
   char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}