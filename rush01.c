/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raoublla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:24:08 by raoublla          #+#    #+#             */
/*   Updated: 2017/09/10 21:33:50 by raoublla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int		ft_rec_back(int grid[9][9], int position)
{
	int k;
	int i;
	int j;

	k = 1;
	if (position == 9 * 9)
		return (1);
	i = position / 9;
	j = position % 9;
	if (grid[i][j] != 0)
		return (ft_rec_back(grid, position + 1));
	while (k <= 9)
	{
		if (not_in_line(k, grid, i)
				&& not_in_column(k, grid, j)
					&& not_in_block(k, grid, i, j))
		{
			grid[i][j] = k;
			if (ft_rec_back(grid, position + 1))
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}

int		ft_cpy_after_line_one(int grid[9][9], char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				grid[i - 1][j] = 0;
			else
				grid[i - 1][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int grid[9][9];

	if (argc == 10)
	{
		if (check_if_sudoku_is_right(argv) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		ft_cpy_after_line_one(grid, argv);
		if (ft_rec_back(grid, 0))
			display(grid);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
