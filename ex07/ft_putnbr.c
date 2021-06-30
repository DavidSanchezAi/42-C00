/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:33:09 by dasanche          #+#    #+#             */
/*   Updated: 2021/06/30 13:54:39 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	potence(int num2)
{
	int	cont;
	int	num1;

	cont = 0;
	num1 = 1;
	while (cont < num2)
	{
		num1 *= 10;
		cont++;
	}
	return (num1);
}

void	putchar(int nb, int digit, char ch)
{
	int	number;

	if (digit != 0)
	{
		number = nb / potence(digit - 1);
		ch = number + '0';
		write(1, &ch, 1);
		nb -= number * potence(digit - 1);
		digit--;
		putchar(nb, digit, '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	putchar(nb, sizeof(nb) - 1, '0');
}
