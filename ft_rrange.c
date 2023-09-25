/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 01:43:52 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/23 10:17:44 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	if (end >= start)
		len = end - start;
	else
		len = start - end;

	r = (int *)malloc(sizeof(int) * len);
	if (!r)
		return (NULL);
	while (len >= 0)
	{
		if (end >= start)
			r[len] = start++;
		else
			r[len] = start--;
		len--;
	}
	return (r);
}
