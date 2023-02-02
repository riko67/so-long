/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:36:38 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/23 15:36:39 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

t_color new_color(int r, int g, int b, int a)
{
    t_color color;

    color.r = (char)r;
    color.g = (char)g;
    color.b = (char)b;
    color.a = (char)a;
    return (color);
}

void    pixelcolor(char *pixels, t_color color)
{
    pixel[0] = color.b;
    pixel[1] = color.g;
    pixel[2] = color.r;
    pixel[3] = color.a;
}

void    imgcolor(t_image *image, t_color color)
{
    int i;
    int j;

    i = 0;
    while (i < image->size.y)
    {
        j = 0;
        while (j < image->size.x)
        {
            pixelcolor(&image->pixels[x * 4 + image->line_size * y], color);
            j++;
        }
        i++;
    }
}