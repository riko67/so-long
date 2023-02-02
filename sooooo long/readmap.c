/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:32:31 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/16 14:32:33 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	freetab(t.tab tab)
{
	int	i;

	i = 0;
	while (tab.tab[i])
	{
		free(tab.tab[i])
			i++;
	}
	free(tab.tab);
}

t_list	map_list(t_list *lst, int fd)
{
	t_list	tmp;
	char	*str;

	str = get_next_line(fd);
	while (str)
	{
        s = get_next_line(fd);
		tmp = ft_lstnew(s);
		ft_lstadd_back(&lst, tmp);
    }
	return (lst)
}

t_tab	readtab(int fd)
{
	char	**tab;
	t_list	*lst;
	t_list	*tmp;
	t_tab	pos;
	int		i;

	i = 0;
	lst = NULL;
	lst = map_list(lst, fd);
	tpm = lst;
	tab = malloc(sizeof(char) * (ft_lstsize(lst) + 1));
	if (!tab)
		exit(EXIT_FAILURE);
	while (tpm)
	{
		tab[i] = ft_strdup(tmp->content);
		tmp = tmp->next;
		i++;
	}
	tab[i] = '\0';
	pos.tab = tab;
	pos.x = ft_strlen(*map);
	pos.y = ft_strlen(lst);
	ft_lstclear(&lst, free);
	return (pos);
}

t_pos	findexit(t_tab tab)
{
	int i;
	t_pos pos;

	i = 0;
	while (tab.tab[i])
	{
		j = 0;
		while (tab.tab[i][j])
		{
			if (tab.tab[i][j] == 'E')
			{
				pos.x = i;
				pos.y = j;
			}
			j++;
		}
		i++;
	}
	return (pos);
}