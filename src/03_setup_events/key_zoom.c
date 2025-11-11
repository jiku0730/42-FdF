/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_zoom.c                                         :+:      :+:    :+:   */
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

void	zoom_in(t_fdf *fdf)
{
	if (fdf->zoom < 100)
	{
		fdf->zoom += 2;
		redraw_map(fdf);
	}
}

void	zoom_out(t_fdf *fdf)
{
	if (fdf->zoom > 2)
	{
		fdf->zoom -= 2;
		redraw_map(fdf);
	}
}
