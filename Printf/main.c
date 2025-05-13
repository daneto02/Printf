#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int     num = -42;
    unsigned int u = 4294967295;
    char    c = 'A';
    char    str[] = "42 Lisboa";
    void    *ptr = &num;

    ft_printf("ft_printf %c\n", c);
    printf("printf %c\n", c);

    ft_printf("ft_printf %s\n", str);
    printf("printf %s\n", str);

    ft_printf("ft_printf %d\n", num);
    printf("printf %d\n", num);

    ft_printf("ft_printf %u\n", u);
    printf("printf %u\n", u);

    ft_printf("ft_printf lower %x\n", num);
    printf("printf lower %x\n", num);

    ft_printf("ft_printf upper %X\n", num);
    printf("printf upper %X\n", num);

    ft_printf("ft_printf %p\n", ptr);
    printf("printf %p\n", ptr);

    ft_printf("ft_printf %%\n");
    printf("printf %%\n");
    return (0);
}
