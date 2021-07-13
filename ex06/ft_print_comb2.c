/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:16:53 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/13 18:25:37 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	show_numb(int nb)
{
	int	nb1;
	int	nb2;

	nb1 = nb / 10 + 48;
	nb2 = nb % 10 + 48;
	write(1, &nb1, 1);
	write(1, &nb2, 1);
}

void	ft_print_comb2(void)
{
	int	g;
	int	h;

	g = 0;
	h = 0;
	while (g <= 99)
	{
		h = g + 1;
		while (h <= 99)
		{
			show_numb(g);
			write(1, " ", 1);
			show_numb(h);
			if (!(g == 98 && h == 99))
			{
				write(1, ",", 2);
			}
			h++;
		}
		g++;
	}
}
