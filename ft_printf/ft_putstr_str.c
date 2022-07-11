/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:04:40 by nmorphet          #+#    #+#             */
/*   Updated: 2022/03/31 11:17:05 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_str(char *args, int *l)
{
	size_t	i;

	i = 0;
	if (args == NULL)
	{
		write(1, "(null)", 6);
		(*l) += 6;
		return ;
	}
	while (args[i])
	{
		ft_putchar_len(args[i], l);
		i++;
	}
}
