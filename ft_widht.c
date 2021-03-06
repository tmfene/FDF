/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_widht.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 08:46:06 by tmfene            #+#    #+#             */
/*   Updated: 2018/08/10 12:44:06 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_widht(char **map, int i)
{
	int		j;
	int		z;

	j = 0;
	z = 0;
	while (map[i][j] != '\0')
	{
		if (ft_isdigit(map[i][j]) == 1 && ft_isdigit(map[i][j + 1]) != 1)
		{
			z++;
			while (map[i][j] != ' ' && map[i][j] != '\0')
				j++;
		}
		else
			j++;
	}
	return (z);
}
