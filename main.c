#include "main.h"

int main(void)
{
    int a = 0, b = 0;

    a = _printf("%d %i %s aaa bbb %c\n",5 ,5 ,"hi every one", 'K');
    b = printf("%d %i %s aaa bbb %c\n",5 ,5 ,"hi every one", 'K');

    printf("_printf %d\nprintf %d\n", a, b);

    return (0);
}

