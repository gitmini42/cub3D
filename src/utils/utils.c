/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuel <samuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:34:17 by scarlos-          #+#    #+#             */
/*   Updated: 2025/09/13 23:52:54 by samuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	ft_free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	free_textures(t_data *data)
{
	int	i;

	if (!data)
		return ;
	i = 0;
	while (i < 4)
	{
		free(data->textures[i].data);
		data->textures[i].data = NULL;
		i++;
	}
}

void	free_map_and_textures(t_map *pmap)
{
	int	i;

	if (!pmap)
		return ;
	i = 0;
	while (i < pmap->line_count && pmap->map && pmap->map[i])
		free(pmap->map[i++]);
	free(pmap->map);
	pmap->map = NULL;
	i = 0;
	while (i < pmap->line_count && pmap->map2 && pmap->map2[i])
		free(pmap->map2[i++]);
	free(pmap->map2);
	pmap->map2 = NULL;
	free(pmap->no);
	pmap->no = NULL;
	free(pmap->so);
	pmap->so = NULL;
	free(pmap->we);
	pmap->we = NULL;
	free(pmap->ea);
	pmap->ea = NULL;
	pmap->line_count = 0;
}

void	free_data(t_data *data)
{
	if (!data)
		return ;
	free_textures(data);
	if (data->pmap)
	{
		free_map_and_textures(data->pmap);
		free(data->pmap);
		data->pmap = NULL;
	}
	if (data->img && data->mlx)
		mlx_destroy_image(data->mlx, data->img);
	if (data->mlx_win && data->mlx)
		mlx_destroy_window(data->mlx, data->mlx_win);
	if (data->mlx)
	{
		mlx_destroy_display(data->mlx);
		free(data->mlx);
		data->mlx = NULL;
	}
}

void	free_mlx(t_data *data)
{
	if (!data || !data->mlx)
		return ;
	if (data->img)
		mlx_destroy_image(data->mlx, data->img);
	if (data->mlx_win)
		mlx_destroy_window(data->mlx, data->mlx_win);
	mlx_destroy_display(data->mlx);
	free(data->mlx);
	data->mlx = NULL;
}
