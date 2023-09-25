/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:43:03 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/22 20:46:43 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
