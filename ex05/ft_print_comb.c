/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:27:31 by dasanche          #+#    #+#             */
/*   Updated: 2021/06/30 17:00:20 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char a, char b, char c, int i)
{
	if (i == 1)
		i = 0;
	else
		write(1, ", ", 2);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	return (i);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	int		i;

	a = '0';
	b = '1';
	c = '2';
	i = 1;
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				i = ft_putchar(a, b, c, i);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}
