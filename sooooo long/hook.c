/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:48:25 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/23 15:48:27 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int ft_input(int key, void *param)
{
    t_program *prog = (t_program *)param;
    mlx_clear_window(prog->mlx, prog->window.reference);
    if (key == 124)
        prog->spritepos.x += prog->sprite.size.x;
    else if (key == 123)
        prog->spritepos.x -= prog->sprite.size.x;
    else if (key == 125)
        prog->spritepos.y += prog->sprite.size.y;
    else if (key == 126)
        prog->spritepos.y -= prog->sprite.size.y;
    else if (key == 15)
        imgcolor(&prog->sprite, new_color(255, 0, 0, 0));
    else if (key == 5)
        imgcolor(&prog->sprite, new_color(255, 0, 0, 0));
    else if (key == 11)
        imgcolor(&prog->sprite, new_color(255, 0, 0, 0));
    mlx_put_image_to_window(prog->mlx, program->window.reference, program->sprite.reference, 
                            program->spritepos.x, program->spritepos.y);
    ft_printf("The key pressed is %d\n", key);
    return (0);
}

int ft_upload(void *param)
{
    t_program *program = (t_program *)param;
    static int frame;
    frame++;
    if (frame == ANIM_FRAMES)
        program->spritepos.y += 1;
    else if (frame >= ANIM_FRAMES * 2)
    {
        program->spritepos.y -= 1;
        frame = 0;
    }
    mlx_put_image_to_window((program->mlx, program->window.reference, program->sprite.reference, 
                            program->spritepos.x, program->spritepos.y);
    return (0);
}


