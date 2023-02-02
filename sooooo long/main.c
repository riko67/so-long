/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:10:16 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/23 16:10:18 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	main(void)
{
	t_tab map;
	t_program program;
	program.mlx = mlx_init();
	program.window = ft_new_window(program.mlx, map.x, map.y, "TEST");
	program.sprite = ft_new_sprite(program.mlx, "sprites.xpm");
	program.spritepos.x = 0;
	program.spritepos.y = 0;
	mlx_put_image_to_window(program.mlx, program.window.reference,
			program.sprite.reference, program.spritepos.x, program.spritepos.y);
	mlx_key_hook(program.window.reference, *ft_input, &program);
	mlx_loop_hook(program.mlx, *ft_upload, &program);
	mlx_loop(program.mlx);
}

*/ programme mettre les sprites au bon endroit : lis le tableau si c est 1 met le sprite 1 et multiplier x par la taille des cases
