/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavitori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:46:51 by mavitori          #+#    #+#             */
/*   Updated: 2023/08/19 16:20:44 by anacaro5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

void	putchar(char c);

int	main(void)
{
	char	c;

	c = '\n';
	rush(120, 30);
	putchar('\n');
	rush(5, 3);
	putchar('\n');
	rush(5, 1);
	putchar('\n');
	rush(1, 1);
	putchar('\n');
	rush(1, 5);
	putchar('\n');
	rush(4, 4);
	return (0);
}
