/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solution.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsewlia <dsewlia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/25 15:36:22 by dsewlia       #+#    #+#                 */
/*   Updated: 2024/08/25 21:41:34 by pkhvorov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		check_soln(int grid[4][4], int params[16]);
void	p_grid12(int grid[4][4], int p[4], int i);
void	p_grid13(int grid[4][4], int p[4], int i);
void	p_grid14(int grid[4][4], int p[4], int i);
void	p_grid21(int grid[4][4], int p[4], int i);
void	p_grid22(int grid[4][4], int p[4], int i);
void	p_grid23(int grid[4][4], int p[4], int i);
void	p_grid31(int grid[4][4], int p[4], int i);
void	p_grid32(int grid[4][4], int p[4], int i);
void	p_grid41(int grid[4][4], int p[4], int i);

int	get_params(char *input, int params[16])
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (input[j] != '\0')
	{
		if (input[j] >= '1' && input[j] <= '4')
		{
			if (count >= 16)
				return (0);
			params[i++] = input[j] - '0';
			count++;
		}
		else if (input[j] != ' ' || (j > 0 && input[j - 1] == ' '))
			return (0);
		j++;
	}
	return (count);
}

int	check_param(int param[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (((param[i] + param[i + 4]) > 5)
			|| ((param[i] + param[i + 4]) < 3))
			return (0);
		i++;
	}
	i = 8;
	while (i < 12)
	{
		if (((param[i] + param[i + 4]) > 5)
			|| ((param[i] + param[i + 4]) < 3))
			return (0);
		i++;
	}
	return (1);
}

void	dy_soln(int grid[4][4], int p[4], int params[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 8] == 1 && params[i + 12] == 2)
			p_grid12(grid, p, i);
		else if (params[i + 8] == 1 && params[i + 12] == 3)
			p_grid13(grid, p, i);
		else if (params[i + 8] == 1 && params[i + 12] == 4)
			p_grid14(grid, p, i);
		else if (params[i + 8] == 2 && params[i + 12] == 1)
			p_grid21(grid, p, i);
		else if (params[i + 8] == 2 && params[i + 12] == 2)
			p_grid22(grid, p, i);
		else if (params[i + 8] == 2 && params[i + 12] == 3)
			p_grid23(grid, p, i);
		else if (params[i + 8] == 3 && params[i + 12] == 1)
			p_grid31(grid, p, i);
		else if (params[i + 8] == 3 && params[i + 12] == 2)
			p_grid32(grid, p, i);
		else if (params[i + 8] == 4 && params[i + 12] == 1)
			p_grid41(grid, p, i);
		i++;
	}
}

int	sol(int c[4], int grid[4][4], int params[16])
{
	int		p[4];

	p[0] = -1;
	while (++p[0] < c[0])
	{
		p[1] = -1;
		while (++p[1] < c[1])
		{
			p[2] = -1;
			while (++p[2] < c[2])
			{
				p[3] = -1;
				while (++p[3] < c[3])
				{
					dy_soln(grid, p, params);
					if (check_soln(grid, params))
						return (1);
				}
			}
		}
	}
	return (0);
}
