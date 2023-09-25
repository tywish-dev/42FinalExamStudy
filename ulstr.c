/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:04:58 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/22 23:19:38 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	temp;
	int		i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				temp = argv[1][i] - 32;
				write(1, &temp, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				temp = argv[1][i] + 32;
				write(1, &temp, 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}