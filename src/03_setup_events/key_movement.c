/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_movement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:00:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/11 22:15:04 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	redraw_map(t_fdf *fdf)
{
	clear_image(fdf);
	draw_map(fdf);
	render_to_window(fdf);
}

void	move_left(t_fdf *fdf)
{
	fdf->offset_x -= 10;
	redraw_map(fdf);
}

void	move_right(t_fdf *fdf)
{
	fdf->offset_x += 10;
	redraw_map(fdf);
}

void	move_up(t_fdf *fdf)
{
	fdf->offset_y -= 10;
	redraw_map(fdf);
}

void	move_down(t_fdf *fdf)
{
	fdf->offset_y += 10;
	redraw_map(fdf);
}
