/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:04:01 by tmfene            #+#    #+#             */
/*   Updated: 2018/08/12 13:56:13 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_asign_strctmlx(t_mlx *to)
{
	to->movex = 550;
	to->movey = 100;
	to->zoom = 20;
	to->alti = -10;
	to->xwin = 1920;
	to->ywin = 1080;
}

int				main(int argc, char **argv)
{
	t_mlx	to;

	if (argc == 2)
	{
		to.map = ft_get_map(argv, &to);
		ft_asign_strctmlx(&to);
		ft_xymap(&to, 0, 0, 0);
		to.mlx = mlx_init();
		to.win = mlx_new_window(to.mlx, to.xwin, to.ywin, "Tumelo's Work");
		ft_pixel(&to);
		mlx_hook(to.win, 2, 0, ft_keys, &to);
		mlx_loop(to.mlx);
	}
	return (0);
}
