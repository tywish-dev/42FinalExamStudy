/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:32:59 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/23 09:34:31 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*swap_cases(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
