/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:12:04 by tmfene            #+#    #+#             */
/*   Updated: 2018/08/10 16:47:45 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include <mlx.h>
# include <fcntl.h>

typedef	struct	s_draw
{
	int		firstpx;
	int		firstpy;
	int		endpxx;
	int		endpxy;
	int		endpyx;
	int		endpyy;
}				t_draw;

typedef	struct	s_mlx
{
	void	*mlx;
	void	*win;
	int		xwin;
	int		ywin;
	int		nuline;
	int		zoom;
	int		movex;
	int		movey;
	int		color;
	int		varx;
	int		vary;
	int		alti;
	int		**mapxyz;
	char	**map;
}				t_mlx;

char			**ft_get_map(char	**argv, t_mlx *to);
int				get_next_line(int const fd, char **line);
void			ft_xymap(t_mlx *to, int y, int x, int i);
void			ft_pixel(t_mlx *to);
int				ft_widht(char **map, int i);
int				ft_keys(int keycode, t_mlx *to);
void			ft_draw(int endx, int endy, t_mlx *to, t_draw *d);

#endif
