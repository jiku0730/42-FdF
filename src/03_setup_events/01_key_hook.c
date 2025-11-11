/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 10:00:00 by kei2003730       #+#    #+#             */
/*   Updated: 2025/11/11 21:00:00 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	close_program(t_fdf *fdf)
{
	cleanup_fdf(fdf);
	exit(0);
	return (0);
}

int	key_press(int keycode, t_fdf *fdf)
{
	if (keycode == ESC_KEY)
		close_program(fdf);
	else if (keycode == PLUS_KEY || keycode == NUM_PLUS_KEY)
		zoom_in(fdf);
	else if (keycode == MINUS_KEY || keycode == NUM_MINUS_KEY)
		zoom_out(fdf);
	else if (keycode == LEFT_ARROW)
		move_left(fdf);
	else if (keycode == RIGHT_ARROW)
		move_right(fdf);
	else if (keycode == UP_ARROW)
		move_up(fdf);
	else if (keycode == DOWN_ARROW)
		move_down(fdf);
	return (0);
}
