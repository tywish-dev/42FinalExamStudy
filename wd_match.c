/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:12:28 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/25 18:10:38 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	wd_len;

	if(argc == 3)
	{
		i = 0;
		j = 0;
		wd_len = 0;
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
				{
					wd_len++;
					break;
				}
				j++;
			}
			i++;
		}
		if (wd_len == ft_strlen(argv[1]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}