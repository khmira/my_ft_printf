#include "ft_printf.h"
#include <stdio.h>


int main()
{
	int a = ft_printf("\nfuck you\n");printf("\n");
	int b = printf("\nfuck you \n%.da\n",-4,1);printf("\n");

	printf("%d   |  %d\n", a, b);

	return 0;
}