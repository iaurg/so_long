/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:21:08 by wleite            #+#    #+#             */
/*   Updated: 2021/09/10 02:08:30 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int main(int argc, char **argv)
{
	void	*mlx;
	void	*win;
	char	**map;

	if (argc == 2)
	{
		map = map_gen(argv[1]);
		if (map_check(map))
		{
			mlx = mlx_init();
			win = mlx_new_window(mlx, WIN_WIDTH, WIN_HEIGHT, "so_long");
			map_draw(map, mlx, win);
			mlx_loop(mlx);
		}
		else
			printf("Map error!");
	}
	else
		printf("No map specified.");
	return (0);
}
