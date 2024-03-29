/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:56:35 by samusanc          #+#    #+#             */
/*   Updated: 2023/11/30 13:24:24 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub.h>

static void	key_press_p2(int key, t_cub *cub)
{
	if (key == 123 || key == 124)
	{
		if (key == 123)
			rotate_view_left(cub);
		else
			rotate_view_rigth(cub);
	}
	else if (key == 69 || key == 78)
		minimap_zoom(cub, key);
}

static void	key_press_p1(int key, t_cub *cub)
{
	if (key == 0 || key == 1 || key == 2 || key == 13)
		move_player(key, cub);
	else if (key == 18 || key == 19 || key == 20)
		increase_dpi(cub, key);
	else if (key == 10)
	{
		if (!cub->fisheye)
			cub->fisheye = 1;
		else
			cub->fisheye = 0;
	}
	else if (key == 36)
		turn_camera(cub);
	else if (key == 49)
	{
		if (cub->door == 0)
			open_doors(cub);
		else
			close_doors(cub);
	}
}

void	key_press(int key, void *param)
{
	t_cub		*cub;

	cub = (t_cub *)param;
	if (key == 53)
		close_x(param);
	else if (key < 50)
		key_press_p1(key, cub);
	else if (key > 50)
		key_press_p2(key, cub);
	start_cub(cub);
}
