/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:54:50 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/12 22:05:36 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	nub1;
	char	nub2;
	char	nub3;

	nub1 = '0';
	while (nub1 <= '9')
	{
		nub2 = nub1 + 1;
		while (nub2 <= '9')
		{
			nub3 = nub2 + 1;
			while (nub3 <= '9')
			{
				write(1, &nub1, 1);
				write(1, &nub2, 1);
				write(1, &nub3, 1);
				if (!(nub1 == '7' && nub2 == '8' && nub3 == '9'))
					write(1, ",", 2);
				nub3++;
			}
			nub2++;
		}
		nub1++;
	}
}
