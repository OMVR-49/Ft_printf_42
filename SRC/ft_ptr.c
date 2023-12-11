/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:10:44 by ojebbari          #+#    #+#             */
/*   Updated: 2023/12/11 01:04:01 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDE/ft_printf.h"

int	ft_ptr(unsigned long p, char *ptr)
{
	size_t	lenptr;

	lenptr = ft_strlen(ptr);
	if (p < lenptr)
		return (ft_putchar(ptr[p]));
	else
		return (ft_ptr(p / lenptr, ptr) + ft_ptr(p % lenptr, ptr));
}
