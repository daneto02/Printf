/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:45:56 by daneto            #+#    #+#             */
/*   Updated: 2025/05/12 19:32:23 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_putstr(char *str, size_t *counter)
{
    if (!str)
        str = "(null)";
    while (*str)
    {
        ft_putchar(*str, counter);
        str++;
    }
}