/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_cub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fate <fate@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:42:29 by gtrinida          #+#    #+#             */
/*   Updated: 2022/11/06 14:46:35 by fate             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	clear_map(t_mlx *mlx)
{
	int i;

	i = 0;
	if(!mlx->map)
		return ;
	while (i < mlx->map_height)
	{
		free(mlx->map[i]);
		i++;
	}
	free(mlx->map);
}


void clear_textures(t_mlx *mlx)
{
	int	i;

	i = 0;
	if (!mlx->textures[i])
		
	while (i < 4)
	{//что если мы не заполнили tex[i]
	//проверить отчиску в таком кейсе
		if (mlx->textures[i])
		{
			mlx_destroy_image(mlx->mlx_ptr, mlx->textures[i]->img);
			free(mlx->textures[i]);
		}
		i++;
	}
	free(mlx->textures);
}
//дополнить отчистками если есть необходимость
void	clear_cub(t_mlx *mlx)
{
	clear_textures(mlx);
	clear_map(mlx);
	mlx_destroy_image(mlx->mlx_ptr, mlx->img);
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	free(mlx->map_path);
	free(mlx->info);
	free(mlx);
	//exit(0);
}
