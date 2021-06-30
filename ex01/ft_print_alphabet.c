/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:35:45 by dasanche          #+#    #+#             */
/*   Updated: 2021/06/28 12:48:32 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter - 1 != 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
