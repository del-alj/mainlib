#include <ctype.h> 
#include <stdio.h> 
#include "../includes/libft.h"

int main() 
{ 
  
    // Character to be converted to lowercase 
    char ch = 'G'; 
  
    // convert ch to lowercase using toLower() 
    printf("%c in lowercase is represented as = %c", ch, ft_tolower(ch)); 
  
    return 0; 
} 