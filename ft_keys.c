/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 09:29:23 by tmfene            #+#    #+#             */
/*   Updated: 2018/08/10 15:53:13 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_key_hook_move(int keycode, t_mlx *to)
{
	if (keycode == 124 || keycode == 123)
	{
		to->movex = (keycode == 124) ? to->movex + 20 : to->movex - 20;
		mlx_clear_window(to->mlx, to->win);
		ft_pixel(to);
	}
	if (keycode == 125 || keycode == 126)
	{
		to->movey = (keycode == 125) ? to->movey + 20 : to->movey - 20;
		mlx_clear_window(to->mlx, to->win);
		ft_pixel(to);
	}
}

int				ft_keys(int keycode, t_mlx *to)
{
	ft_key_hook_move(keycode, to);
	if (keycode == 78 || keycode == 69)
	{
		to->zoom = (keycode == 78) ? to->zoom - 2 : to->zoom + 2;
		to->zoom = (to->zoom <= 0) ? 0 : to->zoom;
		mlx_clear_window(to->mlx, to->win);
		ft_pixel(to);
	}
	if (keycode == 116 || keycode == 121)
	{
		to->alti = (keycode == 116) ? to->alti + 1 : to->alti - 1;
		mlx_clear_window(to->mlx, to->win);
		ft_xymap(to, 0, 0, 0);
		ft_pixel(to);
	}
	if (keycode == 53)
	{
		mlx_destroy_window(to->mlx, to->win);
		exit(EXIT_FAILURE);
	}
	return (0);
}
