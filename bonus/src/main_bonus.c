/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:58:04 by samusanc          #+#    #+#             */
/*   Updated: 2023/11/30 20:47:44 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub.h>

void	start_loop(t_cub *cub)
{
	mlx_loop(cub->mlx);
	return ;
	(void)cub;
}

/*
void	leaks()
{
	system("leaks -q cub3d");
}
*/
int	main(int argc, char **argv)
{
	t_cub	*cub;

	cub = NULL;
	if (argc != 2)
	{
		ft_perror(WRONG_ARGUMENTS);
		exit(-1);
	}
	else
	{
		cub = map_parsing(argv[1]);
		if (!cub)
		{
			write(STDERR_FILENO, "Error\nFailed texture\n", 21);
			exit(-1);
		}
		start_cub(cub);
		start_controls(cub);
		start_loop(cub);
	}
	exit(0);
}
