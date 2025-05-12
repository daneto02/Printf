/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:03:59 by daneto            #+#    #+#             */
/*   Updated: 2025/05/12 20:09:58 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_auxi(unsigned long long n, const char *base, size_t *counter)
{
	char	buffer[65];
	int		base_len;
	int		i;

	base_len = 0;
	while (base[base_len])
		base_len++;
	i = 64;
	buffer[i] = '\0';
	if (n == 0)
		buffer[--i] = base[0];
	else
	{
		while (n > 0)
		{
			buffer[--i] = base[n % base_len];
			n = n / base_len;
		}
	}
	while (buffer[i])
		ft_putchar(buffer[i++], counter);
}
