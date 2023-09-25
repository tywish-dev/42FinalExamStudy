/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:47:00 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/22 21:05:07 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	char	c;
	char	temp;

	c = 'z';
	while(c <= 'z' && c >= 'a')
	{
		if (c % 2 != 0)
		{
			temp = c - 32;
			write(1, &temp, 1);
		}
		else
		{
			write(1, &c, 1);
		}
		c--;
	}
	write(1, "\n", 1);
	return (0);
}