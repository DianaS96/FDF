/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coverand <coverand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:52:36 by coverand          #+#    #+#             */
/*   Updated: 2022/02/25 17:18:10 by coverand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"
#include "include/colors.h"
#include "include/key.h"

static int	ft_isometric(t_map *map_dots)
{
	if (map_dots->isometric == 1)
	{
		ft_x_rotation(map_dots);
		ft_y_rotation(map_dots);
		ft_z_rotation(map_dots);
		map_dots->x0 = (map_dots->x0 - map_dots->y0) * cos(map_dots->angle);
		map_dots->y0 = -map_dots->z0 + (map_dots->x0 + \
			map_dots->y0) * sin(map_dots->angle);
		map_dots->x1 = (map_dots->x1 - map_dots->y1) * cos(map_dots->angle);
		map_dots->y1 = -map_dots->z1 + (map_dots->x1 + \
			map_dots->y1) * sin(map_dots->angle);
	}
	return (0);
}

void	ft_set_coord(t_map *map_dots)
{
	map_dots->z0 = map_dots->z[(int)map_dots->y0][(int)map_dots->x0];
	map_dots->z1 = map_dots->z[(int)map_dots->y1][(int)map_dots->x1];
	if (map_dots->color_coord[(int)map_dots->y0][(int)map_dots->x0] == -1 \
		|| map_dots->color_coord[(int)map_dots->y1][(int)map_dots->x1] == -1 \
		|| map_dots->has_color == 0)
		ft_define_color(map_dots);
	ft_set_color(map_dots);
	map_dots->x0 *= map_dots->distance;
	map_dots->y0 *= map_dots->distance;
	map_dots->x1 *= map_dots->distance;
	map_dots->y1 *= map_dots->distance;
	map_dots->z0 *= (map_dots->distance / map_dots->z_divisor);
	map_dots->z1 *= (map_dots->distance / map_dots->z_divisor);
	ft_2d_rotation(map_dots);
	ft_isometric(map_dots);
	map_dots->x0 += map_dots->x_shift;
	map_dots->y0 += map_dots->y_shift;
	map_dots->x1 += map_dots->x_shift;
	map_dots->y1 += map_dots->y_shift;
	map_dots->deltax = map_dots->x1 - map_dots->x0;
	map_dots->deltay = map_dots->y1 - map_dots->y0;
	map_dots->x_start = map_dots->x0;
	map_dots->y_start = map_dots->y0;
}
