#include "main.h"

int main(void)
{
	int a = 0, b = 0;

    a = _printf("Let's try to printf a simple sentence.\n");
    b = printf("Let's try to printf a simple sentence.\n");

    printf("printf : %d\n _printf : %d\n", b, a);

    return (0);
}
