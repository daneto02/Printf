/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:57:40 by daneto            #+#    #+#             */
/*   Updated: 2025/05/12 19:32:03 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putptr(void *ptr, size_t *counter)
{
    unsigned long ptr_adr;
    
    ptr_adr = (unsigned long)ptr;
    if (!ptr)
        ft_putstr("(nil)", counter);
    else
    {
        ft_putstr("0x", counter);
        ft_auxi(ptr_adr, "0123456789abcdef", counter);
    }
}