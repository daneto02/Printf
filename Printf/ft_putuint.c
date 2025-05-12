/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:13:10 by daneto            #+#    #+#             */
/*   Updated: 2025/05/12 20:17:35 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putuint(unsigned int num, size_t *counter)
{
    ft_auxi((unsigned long long) num, "0123456789", counter);
}
