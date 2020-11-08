#include "ft_printf.h"
#include <stdio.h>


int main()
{
	int a = ft_printf("\nfuck you\n%.*dg\n",777,1);printf("\n");
	int b = 123456;//   printf("\nfuck you\n%.349dg\n",1);printf("\n");

	printf("%d   |  %d\n", a, b);

	return 0;
}
