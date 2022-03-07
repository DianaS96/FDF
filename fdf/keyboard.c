/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coverand <coverand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:49:34 by coverand          #+#    #+#             */
/*   Updated: 2022/02/24 21:18:35 by coverand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"
#include "include/colors.h"
#include "include/key.h"

int	deal_key(int key, void *param)
{
	t_map	*map_dots;

	map_dots = param;
	mlx_clear_window(map_dots->mlx_ptr, map_dots->win_ptr);
	if (key == KEY_HELP)
	{
		ft_draw_menu(map_dots);
		return (0);
	}
	if (key == KEY_ESC)
		ft_close((void *)map_dots);
	ft_shift(map_dots, key);
	ft_zoom(map_dots, key);
	ft_angle(map_dots, key);
	ft_change_color(map_dots, key);
	if (key == KEY_DEFAULT)
		ft_default_params(map_dots);
	if (key == KEY_3D || key == KEY_2D)
		ft_iso(key, map_dots);
	mlx_destroy_image(map_dots->mlx_ptr, map_dots->img->image);
	ft_init_image(map_dots);
	ft_draw_map(map_dots);
	return (0);
}
