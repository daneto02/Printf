/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:35:44 by daneto            #+#    #+#             */
/*   Updated: 2025/05/13 11:01:08 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(int num, size_t *counter)
{
    long n;
    
    n = num;
    if(n < 0)
    {
        ft_putchar('-', counter);
        n = -n;
    }
    if(n > 9)
        ft_putnbr(n / 10, counter);
    ft_putchar('0' + (n % 10), counter);
}