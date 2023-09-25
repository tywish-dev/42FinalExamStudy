/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:25:03 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/25 18:10:29 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_doubles(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while(argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if(check_doubles(argv[1], argv[1][i], i) == 1)
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}