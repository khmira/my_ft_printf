#include "ft_printf.h"
#include <stdio.h>


int main()
{
	int a = ft_printf("\nfuck you\n%07dg\n",1111111);printf("\n");
	int b =    printf("\nfuck you\n%0dg\n",111111);printf("\n");

	printf("%d   |  %d\n", a, b);

	return 0;
}
