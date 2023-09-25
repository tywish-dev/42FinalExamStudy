/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:09:04 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/23 08:12:18 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	div;
	int	num;

	div = 128;
	num = octet;
	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num %= div;
		}
		else
			write(1, "0", 1);
		div /= 2;
	}
}
