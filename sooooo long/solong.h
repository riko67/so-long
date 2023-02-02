/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:33:57 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/11 14:33:59 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H
# ifndef ANIM_FRAMES
#  define ANIM_FRAMES 10
# endif
# include "ft_printf.h"
# include "get_next_line.h"
# include "/Users/ddelacou/MLX42/include/MLX42/MLX42.h"
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

* / map en tableau 
typedef struct s_tab
{
	char **tab;
	int x;
	int y;
}					t_tab;

* / position du exit 
typedef struct s_pos
{
	int x;
	int y;
}					t_pos;

* / taille et adresse
typedef struct s_window
{
	t_pos pos;
	void *reference;
}					t_window;

* / pour les couleurs 
typedef struct s_color
{
	int r;
	int g;
	int b;
	int a;
}					t_color;

typedef struct s_img
{
	void			*reference;
	t_pos			size;
	char			*pixels;
	int				bits_per_pixel;
	int				line_size;
	int				endian;
}					t_image;

* / position de l image 
typedef struct s_program
{
	void			*mlx;
	t_window		window;
	t_image			sprite;
	t_pos			spritepos;
}					t_program;

char				*ft_strjoin(char *s1, char *s2);
size_t				ft_strlen(char *s);
void				*ft_calloc(size_t count, size_t size);
int					rectanglemap(char **tab);
int					wall(t_tab tab);
int					collectible(t_tab tab);
int					exit(t_map map);
int					otherletter(t_tab tab);
t_pos				*checkposition(t_pos *pos, int count);
t_pos				*checkplayer(t_tab tab);
t_list				map_list(t_list *lst, int fd);
t_map				readtab(int fd);
t_window			*ft_new_window(void *mlx, int widht, int height,
						char *name);
void				imgcolor(t_image *image, t_color color);
t_color				new_color(int r, int g, int b, int a);
t_image				ft_new_sprite(void *mlx, char *path);
int					ft_upload(void *param);

# endif
