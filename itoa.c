/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:41:08 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/23 10:01:11 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_len(int nbr)
{
	int len;
	int temp;	

	len = 0;
	temp = nbr;
	if (temp < 0)
	{
		len++;
		temp *= -1;
	}
	while(temp > 0)
	{
		len++;
		temp /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int	len;
	char *num;

	len = count_len(nbr);
	num = malloc(sizeof(char) * len + 1);
	if(!num)
		return (0);
	if (nbr == -2147483648)
	{
		num[0] = '-';
		num[1] = '2';
		num[2] = '1';
		num[3] = '4';
		num[4] = '7';
		num[5] = '4';
		num[6] = '8';
		num[7] = '3';
		num[8] = '6';
		num[9] = '4';
		num[10] = '8';
	}
	else if(nbr < 0)
	{
		num[0] = '-';
		nbr *= -1;
		while (len > 1)
		{
			num[len - 1] = nbr % 10 + 48;
			nbr /= 10;
			len--;
		}
	}
	else
	{
		while(len > 0)
		{
			num[len - 1] = nbr % 10 + 48;
			nbr /= 10;
			len--;
		}
	}
	return (num);
}
