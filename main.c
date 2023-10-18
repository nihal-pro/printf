#include "main.h"

int main(void)
{
    int a = 0, b = 0;

    a = _printf("%% s aaa bbb %c\n", "hi every one", 'K');
    b = printf("%% s aaa bbb %c\n", "hi every one", 'K');

    printf("_printf %d\nprintf %d\n", a, b);

    return (0);
}
