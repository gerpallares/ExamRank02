/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:05:56 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/04 10:16:57 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nc(int n)
{
	int	i = 0;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;

	len = nc(nbr);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	len--;
	if (nbr == -2147483648)
	{
		res = "-2147483648";
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr > 9)
	{
		res[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	res[len] = nbr + '0';
	return (res);
}
