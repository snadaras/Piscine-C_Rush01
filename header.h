/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raoublla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:23:30 by raoublla          #+#    #+#             */
/*   Updated: 2017/09/10 21:25:29 by raoublla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	display(int grid[9][9]);
int		not_in_line(int nb, int grid[9][9], int i);
int		not_in_column(int nb, int grid[9][9], int j);
int		not_in_block(int nb, int grid[9][9], int i, int j);
int		check_if_sudoku_is_right(char **argv);
#endif
