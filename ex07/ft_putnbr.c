/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:31:06 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/13 20:55:32 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int nb)
{
	char	ch;

	if (nb == 0)
		return ;
	rec(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char	ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb / 10));
		ch = '0' - nb % 10;
	}
	else
	{
		rec(nb / 10);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}
