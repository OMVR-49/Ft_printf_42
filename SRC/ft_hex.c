/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:38:25 by ojebbari          #+#    #+#             */
/*   Updated: 2023/12/11 01:03:51 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDE/ft_printf.h"

int	ft_len(unsigned int h)
{
	int	len;

	if (h == 0)
		return (1);
	len = 0;
	while (h != 0)
	{
		len++;
		h = h / 16;
	}
	return (len);
}

int	ft_hex(unsigned int h, const char c)
{
	char	a;

	if (h >= 16)
	{
		ft_hex(h / 16, c);
		ft_hex(h % 16, c);
	}
	else if (h <= 9)
	{
		a = h + '0';
		write (1, &a, 1);
	}
	else
	{
		if (c == 'x')
			a = h - 10 + 'a';
		else if (c == 'X')
			a = h - 10 + 'A';
		write (1, &a, 1);
	}
	return (ft_len(h));
}
