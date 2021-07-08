/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:37:18 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/08 17:37:27 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char zeta;

	zeta = 'z';
	while (zeta >= 'a')
	{
	
		write(1, &zeta, 1);
		--zeta;

	}

}



