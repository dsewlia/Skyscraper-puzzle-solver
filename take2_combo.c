/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take2_combo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsewlia <dsewlia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:09:27 by dsewlia           #+#    #+#             */
/*   Updated: 2024/08/25 21:11:29 by dsewlia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_balance_grid22(int sol[6][4])
{
	sol[3][0] = 3;
	sol[3][1] = 4;
	sol[3][2] = 1;
	sol[3][3] = 2;
	sol[4][0] = 3;
	sol[4][1] = 1;
	sol[4][2] = 4;
	sol[4][3] = 2;
	sol[5][0] = 3;
	sol[5][1] = 2;
	sol[5][2] = 4;
	sol[5][3] = 1;
}

void	p_grid22(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[6][4];

	sol[0][0] = 1;
	sol[0][1] = 4;
	sol[0][2] = 2;
	sol[0][3] = 3;
	sol[1][0] = 2;
	sol[1][1] = 1;
	sol[1][2] = 4;
	sol[1][3] = 3;
	sol[2][0] = 2;
	sol[2][1] = 4;
	sol[2][2] = 1;
	sol[2][3] = 3;
	add_balance_grid22(sol);
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}

void	p_grid31(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[3][4];

	sol[0][0] = 1;
	sol[0][1] = 3;
	sol[0][2] = 2;
	sol[0][3] = 4;
	sol[1][0] = 2;
	sol[1][1] = 1;
	sol[1][2] = 3;
	sol[1][3] = 4;
	sol[2][0] = 2;
	sol[2][1] = 3;
	sol[2][2] = 1;
	sol[2][3] = 4;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}

void	p_grid32(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[3][4];

	sol[0][0] = 2;
	sol[0][1] = 3;
	sol[0][2] = 4;
	sol[0][3] = 1;
	sol[1][0] = 1;
	sol[1][1] = 3;
	sol[1][2] = 4;
	sol[1][3] = 2;
	sol[2][0] = 1;
	sol[2][1] = 2;
	sol[2][2] = 4;
	sol[2][3] = 3;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}

void	p_grid41(int grid[4][4], int p[4], int i)
{
	int		x;
	int		sol[1][4];

	sol[0][0] = 1;
	sol[0][1] = 2;
	sol[0][2] = 3;
	sol[0][3] = 4;
	x = 0;
	while (x < 4)
	{
		grid[i][x] = sol[p[i]][x];
		x++;
	}
}
