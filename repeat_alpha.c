/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:08:50 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/22 22:41:30 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_ntimes(char c)
{
	char	times;

	times = 1;
	if (c >= 'a' && c <= 'z')
	{
		times = c - 96;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		times = c - 64;
	}
	while(times > 0)
	{
		write(1, &c, 1);
		times--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			write_ntimes(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}