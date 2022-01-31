#include <stdio.h>
#include "ft_printf.h"

int main()
{
	void *ptr;

	ptr = "hello";
	printf("pointer original: %p \n", ptr);
	ft_printf("pointer teu: %p", ptr);
}
