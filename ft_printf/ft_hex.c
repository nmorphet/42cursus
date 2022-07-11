/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:29:22 by nmorphet          #+#    #+#             */
/*   Updated: 2022/05/16 13:18:04 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void	ft_p(size_t p, int *l)
{
	char	str[25];
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	*l += 2;
	if (p == 0)
	{
		ft_putchar_len('0', l);
		return ;
	}
	while (p != 0)
	{
		str[i] = hex[p % 16];
		p = p / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], l);
}

void	ft_hex(unsigned int x, int *l, char c)
{
	char	str[25];
	char	*hex;
	int		i;

	if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_len('0', l);
		return ;
	}
	while (x != 0)
	{
		str[i] = hex[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], l);
}

void	ft_uns(unsigned int c, int *l)
{
	if (c >= 10)
		ft_uns(c / 10, l);
	ft_putchar_len(c % 10 + '0', l);
}
