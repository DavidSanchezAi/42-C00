/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:15:25 by dasanche          #+#    #+#             */
/*   Updated: 2021/06/30 12:30:33 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	addZeroIfNeeded(int number, char tochar)
{
	int	aux;

	aux = number / 10;
	tochar = aux + '0';
	write(1, &tochar, 1);
	aux = number - aux * 10;
	tochar = aux + '0';
	write(1, &tochar, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 != 99)
	{
		addZeroIfNeeded(num1, '0');
		write(1, " ", 1);
		addZeroIfNeeded(num2, '0');
		write(1, ", ", 2);
		num2++;
		if (num2 == 100)
		{
			num1++;
			num2 = num1 + 1;
		}
	}
}
