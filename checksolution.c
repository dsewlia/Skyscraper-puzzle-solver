/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checksolution.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkhvorov <pkhvorov@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/25 18:29:30 by pkhvorov      #+#    #+#                 */
/*   Updated: 2024/08/25 21:39:34 by pkhvorov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	check_tb(int matrix[4][4], int col)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (matrix[i][col] > max)
		{
			max = matrix[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_bt(int matrix[4][4], int col)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (matrix[i][col] > max)
		{
			max = matrix[i][col];
			count++;
		}
		i--;
	}
	return (count);
}

int	unique_tb(int matrix[4][4], int col)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 4)
		{
			if (matrix[i][col] == matrix[j][col])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_soln(int grid[4][4], int params[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (check_tb (grid, i) != params[i])
			return (0);
		i++;
	}
	i = 4;
	while (i < 8)
	{
		if (check_bt(grid, i - 4) != params[i])
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!unique_tb(grid, i))
			return (0);
		i++;
	}
	return (1);
}
