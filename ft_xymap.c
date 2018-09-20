/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xymap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:47:01 by tmfene            #+#    #+#             */
/*   Updated: 2018/08/10 12:45:20 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_xymap_struct(t_mlx *to)
{
	int		y;

	y = 0;
	if (!(to->mapxyz = (int **)malloc((to->nuline + 1) * sizeof(int *))))
		exit(EXIT_FAILURE);
	while (y < to->nuline)
	{
		to->mapxyz[y] = (int *)malloc(ft_widht(to->map, y) * sizeof(int));
		if (!(to->mapxyz[y]))
			exit(EXIT_FAILURE);
		y++;
	}
}

void			ft_xymap(t_mlx *to, int y, int x, int i)
{
	ft_xymap_struct(to);
	while (y < to->nuline)
	{
		i = 0;
		x = 0;
		while (to->map[y][i] != '\0')
		{
			if (ft_isdigit(to->map[y][i]) == 1 || to->map[y][i] == '-')
			{
				to->mapxyz[y][x] = ft_atoi(&to->map[y][i]);
				to->mapxyz[y][x] += (to->mapxyz[y][x] != 0) ? to->alti : 0;
				x++;
				if (to->map[y][i] == '-')
					i++;
				while (ft_isdigit(to->map[y][i]) == 1)
					i++;
				while (to->map[y][i] != ' ' && to->map[y][i] != '\0')
					i++;
			}
			else
				i++;
		}
		y++;
	}
}
