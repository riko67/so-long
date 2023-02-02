/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:04:58 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/11 15:05:01 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdlib.h>

int ft_close ()
{
    exit(0);
}

t_window *ft_new_window(void *mlx, int widht, int height, char *name)
{
    t_window    window;

    window.reference = mlx_new_window(mlx, widht, height, name);
    window.pos.x = widht;
    window.pos.y = height;
    mlx_hook(window.reference, 17, 0, ft_close, 0);
    return (window);
}

