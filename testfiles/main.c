#include <stdio.h>
#include "main.h"
int main()
{
int p =	_printf("Character:[%c]\n", 'H');
int a =     printf("Character:[%c]\n", 'H');
printf ("%d     %d\n", p, a);
p = _printf("String:[%s]\n", "I am a string !");
a =     printf("String:[%s]\n", "I am a string !");	
   printf ("%d     %d\n", p, a); 
   p = _printf("Percent:[%%]\n");
	a = printf("Percent:[%%]\n");
   printf("%d    %d\n", p, a); 
   return 1;

}
