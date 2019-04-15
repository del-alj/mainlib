#include <ctype.h> 
#include <stdio.h> 
#include "../includes/libft.h"

int main() 
{ 
    char ch; 
  
    ch = 'g'; 
    printf("%c in uppercase is represented as  %c", 
           ch, ft_toupper(ch)); 
  
    return 0; 
}