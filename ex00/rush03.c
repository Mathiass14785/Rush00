/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavitori <mavitori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:20:11 by mavitori          #+#    #+#             */
/*   Updated: 2023/08/19 17:19:57 by mavitori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_first_line(int line, int col, int x)
{
	while (col <= x && line == 1)
	{
		if (col == 1)
		{
			ft_putchar('A');
			if (col == x)
			{
				ft_putchar('\n');
			}
			col ++;
		}
		else if (col > 1 && col < x)
		{
			ft_putchar('B');
			col ++;
		}
		else if (col == x)
		{
			ft_putchar('C');
			ft_putchar('\n');
			col ++;
			line ++;
		}
	}
}

void	ft_last_line(int col, int x)
{
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar('A');
			if (col == x)
			{
				ft_putchar('\n');
			}
			col ++;
		}
		else if (col > 1 && col < x)
		{
			ft_putchar('B');
			col ++;
		}
		else if (col == x)
		{
			ft_putchar('C');
			ft_putchar('\n');
			col ++;
		}
	}
}

void	ft_middle_lines(int line, int col, int x, int y)
{
	while (col <= x && line < y)
	{
		if (col == x)
		{
			ft_putchar('B');
			ft_putchar('\n');
			line ++;
			col = 1;
		}
		else if (col == 1)
		{
			ft_putchar('B');
			col ++;
		}
		else if (col > 1 && col < x)
		{
			ft_putchar(' ');
			col ++;
		}
	}
}

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 1;
	col = 1;
	while (line <= y && col <= x)
	{
		if (line == 1)
		{
			ft_first_line(line, col, x);
			line = 2;
			col = 1;
		}
		else if (line > 1 && line < y)
		{
			ft_middle_lines(line, col, x, y);
			line = y;
			col = 1;
		}
		else if (line == y)
		{
			ft_last_line(col, x);
			line ++;
		}
	}
}
