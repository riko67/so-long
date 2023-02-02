/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:44:14 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/16 15:44:16 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

t_pos	*checkposition(t_pos *pos, int count)
{
	if (count != 1)
	{
		free(pos);
		return (0);
	}
	return (pos);
}
t_pos	*checkplayer(t_tab tab)
{
	int		i;
	int		j;
	int		count;
	t_pos	*pos;

	count = 0;
	i = -1;
	pos = malloc(sizeof(t_pos));
	if (!pos)
		return (NULL);
	while (tab.tab[++i])
	{
		j = -1;
		while (tab.tab[i][++j])
		{
			if (tab.tab[i][j] == 'P')
			{
				pos->x = j;
				pos->y = i;
				count++;
			}
		}
	}
	return (checkposition(pos, count));
}
int	impossible(t_tab tab, int x, int y)
{
	static int	count;

	count = 0;
	count = 0;
	if (x < 0 || x >= tab.x || y < 0 || y >= tab.y ||
		tab.tab[y][x] == 1 || tab.tab[y][x] == 'M')
		return (0);
	if (tab.tab[y][x] == 'C' || tab.tab[y][x] == 'E')
		count++;
	impossible(tab, x, y + 1);
	impossible(tab, x, y - 1);
	impossible(tab, x + 1, y);
	impossible(tab, x - 1, y);
	return (count);
}

int	playable(t_tab tab, char *path)
{
	int		fd;
	t_tab	tester;
	t_pos	*pos;
	int		i;

	fd = open(path, O_RDONLY);
	tester = read_map(fd);
	pos = checkplayer(tester);
	i = impossible(tester, pos->x, pos->y);
	free(pos);
	if (i != collectible(s_tab) + 1)
		return (0);
	free_tab(tester);
	close(fd);
	return (1);
}

void	ft_putmaptexture(t_tab tab, t_program prog, t_image img)
{
	int i;
	int j;
	int pixelcount;

    pixelcounty = -16;
	i = -1;
	while (tab.tab)
	{
        i++;
        j = 0;
        pixelcountx = 0;
        pixelcounty = pixelcounty + 16; 
		while (tab.tab[i][j])
		{
			if (tab.tab[i][j] == 0)
			{
				mlx_put_image_to_window(prog.mlx, prog->window.reference,
						img.reference, pixelcountx, pixelcounty);
				j++;
				pixelcountx = pixelcountx + 16;
			}
            else if (tab.tab[i][j] == 1)
			{
                mlx_put_image_to_window(prog.mlx, prog->window.reference,
						img.reference, pixelcountx, pixelcounty);
                j++;
                pixelcountx = pixelcountx + 16;
			}
			else if (tab.tab[i][j] == "C")
			{
                mlx_put_image_to_window(prog.mlx, prog->window.reference,
						img.reference, pixelcountx, pixelcounty);
                j++;
                pixelcountx = pixelcountx + 16;
			}
			else if (tab.tab[i][j] == "P")
			{
                mlx_put_image_to_window(prog.mlx, prog->window.reference,
						img.reference, pixelcountx, pixelcounty);
                j++;
                pixelcountx = pixelcountx + 16;
			}
		}
	}
}