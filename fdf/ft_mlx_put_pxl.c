/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_put_pxl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coverand <coverand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:21:22 by coverand          #+#    #+#             */
/*   Updated: 2022/02/25 18:52:52 by coverand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"
#include "include/colors.h"
#include "include/key.h"

/*
Source: https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html
*/
void	my_mlx_pixel_put(t_map *map_dots, int x, int y)
{
	char	*dst;

	dst = map_dots->img->addr + (y * map_dots->img->size_line + \
		x * (map_dots->img->bpp / 8));
	*(unsigned int *)dst = map_dots->color;
}
