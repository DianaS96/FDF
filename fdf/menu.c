/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coverand <coverand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:57:17 by coverand          #+#    #+#             */
/*   Updated: 2022/02/24 20:49:22 by coverand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"
#include "include/colors.h"

void	ft_draw_menu(t_map *map)
{
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 10, WHITE, "Usage:");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 30, \
	WHITE, "Draw map: Enter");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 50, WHITE, "Escape: ESC");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 70, \
	WHITE, "Back to menu: H");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 90, \
	WHITE, "2D Mode: 2 + Enter");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 110, \
	WHITE, "3D Mode: 3 + Enter");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 130, \
	WHITE, "Rotation:");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 150, WHITE, "    X-ax: Q/A");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 170, WHITE, "    Y-ax: W/S");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 190, WHITE, "    Z-ax: E/D");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 210, WHITE, \
		"Back to default params: delete (button near the + and above ENTER)");
	mlx_string_put(map->mlx_ptr, map->win_ptr, 10, 230, \
	WHITE, "Change altitude: F (increase) / R (decrease)");
}
