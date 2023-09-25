/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:33:32 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/22 20:39:29 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	char	c;
	char	temp;
	int 	i;

	i = 0;
	c = 'a';

	while (c >= 'a' && c <= 'z')
	{
		if (i % 2 != 0)
		{
			temp = c - 32;
			write(1, &temp, 1);
		}
		else
			write(1, &c, 1);
		c++;
		i++;
	}
	return (0);
}
