/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:06:53 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/18 10:30:02 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	no;
	int		s;

	no = 0;
	s = 1;
	if (*str == '\0')
		return (0);
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	while (*str && ft_isdigit(*str))
	{
		no = (no * 10) + (*str++ - '0');
		if (no < 0 && s == 1)
			return (-1);
		if (no < 0)
			return (0);
	}
	return (no * s);
}
