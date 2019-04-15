#include <stdio.h>
#include <ctype.h>
#include "../includes/libft.h"

char chars[] = {'A', 0x80, 'Z'};

#define SIZE sizeof( chars ) / sizeof( char )

int main()
  {
    int   i;

    for( i = 0; i < SIZE; i++ ) {
      printf( "Char %c is %san ASCII character\n",
        chars[i],
        ( ft_isascii( chars[i] ) ) ? "" : "not " );
    }
  
return (0);
  }
/*
int main(void)
{
	int ch;

	for (ch = 0x7c; ch <= 0x82; ch++) {
		printf("%#04x    ", ch);
		if (ft_isascii(ch))
			printf("The character is %c\n", ch);
		else
			printf("Cannot be represented by an ASCII character\n");
	}
	return 0;
}
*/