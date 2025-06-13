/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:27:36 by daneto            #+#    #+#             */
/*   Updated: 2025/05/13 11:08:31 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int ft_printf(char const *str, ...);

void    ft_putchar(char c, size_t *counter);
void    ft_putstr(char *str, size_t *counter);
void    ft_putnbr(int num, size_t *counter);
void    ft_putptr(void *ptr, size_t *counter);
void    ft_putuint(unsigned int num, size_t *counter);
void    ft_puthex(unsigned int num, size_t *counter, char *base);

void	ft_auxi(unsigned long long n, const char *base, size_t *counter);

#endif