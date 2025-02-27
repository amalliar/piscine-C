/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:39:26 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 07:59:28 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"

size_t		ft_putstr(char *str)
{
	char	*beg;

	beg = str;
	while (*str)
		ft_putchar(*str++);
	return (str - beg);
}
