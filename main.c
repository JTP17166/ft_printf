#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int n;

	n = 12345;
	ft_printf("pointer teu: %x\n", n);
	printf("pointer original: %x\n", n);
}
