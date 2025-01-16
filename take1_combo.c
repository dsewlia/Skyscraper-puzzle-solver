/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take1_combo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsewlia <dsewlia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:08:23 by dsewlia           #+#    #+#             */
/*   Updated: 2024/08/25 21:09:39 by dsewlia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	p_grid12(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[2][4];

	sol[0][0] = 4;
	sol[0][1] = 2;
	sol[0][2] = 1;
	sol[0][3] = 3;
	sol[1][0] = 4;
	sol[1][1] = 1;
	sol[1][2] = 2;
	sol[1][3] = 3;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}

void	p_grid13(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[3][4];

	sol[0][0] = 4;
	sol[0][1] = 2;
	sol[0][2] = 3;
	sol[0][3] = 1;
	sol[1][0] = 4;
	sol[1][1] = 3;
	sol[1][2] = 1;
	sol[1][3] = 2;
	sol[2][0] = 4;
	sol[2][1] = 1;
	sol[2][2] = 3;
	sol[2][3] = 2;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}

void	p_grid14(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[1][4];

	sol[0][0] = 4;
	sol[0][1] = 3;
	sol[0][2] = 2;
	sol[0][3] = 1;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}

void	p_grid21(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[2][4];

	sol[0][0] = 3;
	sol[0][1] = 1;
	sol[0][2] = 2;
	sol[0][3] = 4;
	sol[1][0] = 3;
	sol[1][1] = 2;
	sol[1][2] = 1;
	sol[1][3] = 4;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}

void	p_grid23(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[3][4];

	sol[0][0] = 1;
	sol[0][1] = 4;
	sol[0][2] = 3;
	sol[0][3] = 2;
	sol[1][0] = 2;
	sol[1][1] = 4;
	sol[1][2] = 3;
	sol[1][3] = 1;
	sol[2][0] = 3;
	sol[2][1] = 4;
	sol[2][2] = 2;
	sol[2][3] = 1;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}
