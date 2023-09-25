/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:39:05 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/23 10:35:49 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	check_doubles(char *str, char c, int pos)
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
	char *total;
	
	i = 0;
	if(argc == 3)
	{
		total = ft_strcat(argv[1], argv[2]);
		while(total[i])
		{
			if (check_doubles(total, total[i], i) == 1)
			{
				write(1, &total[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}