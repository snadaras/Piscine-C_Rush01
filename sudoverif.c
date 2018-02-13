/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoverif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raoublla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:26:59 by raoublla          #+#    #+#             */
/*   Updated: 2017/09/10 21:43:36 by raoublla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_if_sudoku_is_right(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '1' || argv[i][j] > '9') && (argv[i][j] != '.'))
				return (0);
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	if (i != 10)
		return (0);
	return (1);
}
