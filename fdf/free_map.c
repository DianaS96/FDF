/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coverand <coverand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:54:58 by coverand          #+#    #+#             */
/*   Updated: 2022/02/25 18:34:22 by coverand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

void	ft_free_map(t_map *map_dots)
{
	int	i;

	i = 0;
	if (map_dots && map_dots->z)
	{
		while (i < map_dots->y)
		{
			if (map_dots->z[i])
				free(map_dots->z[i]);
			if (map_dots->color_coord[i])
				free(map_dots->color_coord[i]);
			i++;
		}
		free(map_dots->z);
		free(map_dots->color_coord);
		free(map_dots);
	}
}
