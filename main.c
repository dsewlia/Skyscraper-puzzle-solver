/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkhvorov <pkhvorov@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/25 18:02:41 by pkhvorov      #+#    #+#                 */
/*   Updated: 2024/08/25 21:34:22 by pkhvorov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sol(int c[4], int grid[4][4], int params[16]);
int	get_params(char *input, int params[16]);
int	check_param(int param[16]);

void	get_combinations(int c[4], int params[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 8] == 1 && params[i + 12] == 2)
			c[i] = 2;
		else if (params[i + 8] == 1 && params[i + 12] == 3)
			c[i] = 3;
		else if (params[i + 8] == 1 && params[i + 12] == 4)
			c[i] = 1;
		else if (params[i + 8] == 2 && params[i + 12] == 1)
			c[i] = 2;
		else if (params[i + 8] == 2 && params[i + 12] == 2)
			c[i] = 6;
		else if (params[i + 8] == 2 && params[i + 12] == 3)
			c[i] = 3;
		else if (params[i + 8] == 3 && params[i + 12] == 1)
			c[i] = 3;
		else if (params[i + 8] == 3 && params[i + 12] == 2)
			c[i] = 3;
		else if (params[i + 8] == 4 && params[i + 12] == 1)
			c[i] = 1;
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(int matrix[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = matrix[i][j] + '0';
			ft_putchar(c);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	zero_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = '0';
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	matrix[4][4];
	int	params[16];
	int	c[4];
	int	error_message;

	error_message = 1;
	if (argc != 2)
		error_message = 0;
	if (get_params(argv[1], params) != 16)
		error_message = 0;
	if (check_param(params) != 1)
		error_message = 0;
	if (error_message == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	zero_matrix(matrix);
	get_combinations(c, params);
	if (sol(c, matrix, params))
		print_matrix(matrix);
	else
		write (2, "Error\n", 6);
	return (0);
}
