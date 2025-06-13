/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:09:33 by daneto            #+#    #+#             */
/*   Updated: 2025/05/13 14:05:40 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_find_format(va_list va, char *str, size_t *counter)
{
    if (*str == 'c')
        ft_putchar(va_arg(va, int), counter);
    else if (*str == 's')
        ft_putstr(va_arg(va, char *), counter);
    else if (*str == 'p')
        ft_putptr(va_arg(va, void *), counter);
    else if (*str == 'i' || *str == 'd')
        ft_putnbr(va_arg(va, int), counter);
    else if (*str == 'u')
        ft_putuint(va_arg(va, unsigned int), counter);
    else if (*str == 'x' || *str == 'X')
    {
        if(*str == 'x')
            ft_puthex(va_arg(va, unsigned int), counter, "0123456789abcdef");
        else
            ft_puthex(va_arg(va, unsigned int), counter, "0123456789ABCDEF");
    }
    else if (*str == '%')
        ft_putchar(*str, counter);
}

int ft_printf(char const *str, ...)
{
    va_list va;
    size_t counter;

    if (!str || write(1, "", 0) == -1)
        return (-1);
    counter = 0;
    va_start(va, str);
    while (*str)
    {
        if (*str == '%' && *(str + 1))
        {
            ft_find_format(va, (char *)(++str), &counter);
            str++;
        }
        else if (*str == '%' && !*(str + 1))
            return(-1);
        else
        {
            ft_putchar(*str, &counter);
            str++;
        }
    }
    va_end(va);
    return (counter);
}
/* 
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

    printf("\nTESTING STDOUT\n\n");
    close(1);
    fprintf(stderr, "ft: %d\n", ft_printf("teste123\n"));
    fprintf(stderr, "og: %d\n", printf("teste123\n"));
} */