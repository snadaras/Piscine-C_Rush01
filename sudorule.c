/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudorule.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raoublla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:26:42 by raoublla          #+#    #+#             */
/*   Updated: 2017/09/10 21:26:45 by raoublla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		not_in_line(int nb, int grid[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grid[i][j] == nb)
			return (0);
		j++;
	}
	return (1);
}

int		not_in_column(int nb, int grid[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][j] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		not_in_block(int nb, int grid[9][9], int i, int j)
{
	int block_i;
	int block_j;

	block_i = i - (i % 3);
	block_j = j - (j % 3);
	i = block_i;
	while (i < block_i + 3)
	{
		j = block_j;
		while (j < block_j + 3)
		{
			if (grid[i][j] == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
