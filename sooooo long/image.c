/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:26:30 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/23 15:26:33 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

t_image ft_new_image(void *mlx, int width, int height)
{
    t_image img;
    img.reference = mlx_new_image(mlx, width, height);
    img.size.x = width;
    img.size.y = height;
    img.pixels = mlx_get_data_addr(img.reference, &img.bits_per_pixel, &img.line_size, &img.endian);
    return (img);
}

t_image ft_new_sprite(void *mlx, char *path)
{
    t_image img;

    img.reference = mlx_xpm_file_to_image(mlx, path, &img.size.x, &img.size.y);
    img.pixels = mlx_get_data_addr(img.reference, &img.bits_per_pixel, &img.line_size, &img.endian);
    return (img);
}