/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:20:53 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/10 11:21:32 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if (f(*tab) == 1)
			return (1);
		tab++;
	}
	return (0);
}
