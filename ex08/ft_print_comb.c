/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:00:59 by dasanche          #+#    #+#             */
/*   Updated: 2021/06/30 18:14:01 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void adder(int num, char chars[], int n)
{
	int cont;
	if (++chars[num] == 10 && num != n-1)
		adder(num-1, chars, n);
	cont=n;
	while (cont != n-1)
		if (chars[cont--] == 10) 
			chars[cont] = chars[cont - 1] + 1;
}

void writer(char chars[], int n)
{
	int cont;
	char c;
	
	cont=0;
	while (cont != n)
	{
		c = chars[cont++];
		write(1, &c, 1); 

	}
}
void the_printer(int n)
{
	char chars[n];
	int num;
	int cont;

	cont=0;
	num=0;
	while (cont != n-1)
	{
		chars[num++] = cont++ + '0'; //rellenalos 0, 1 ... etc
	}
	while (chars[0] != 9)
	{
		writer(chars, n);
		adder(n, chars, n);
	}	
}


void ft_print_combn(int n)
{
	the_printer(n);
}

