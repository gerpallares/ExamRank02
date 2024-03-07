/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:22:23 by gpallare          #+#    #+#             */
/*   Updated: 2024/02/21 12:35:06 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	range(int start, int end)
{
	int	i;

	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			i++;
			start++;
		}
	}
	if (start > end)
	{
		while (start >= end)
		{
			i++;
			end++;
		}
	}
	return (i);
}

int	*ft_rrange(int start, int end)
{
	int	*ar;
	int	i;
	int	r;

	r = range(start, end);
	i = 0;
	ar = malloc(sizeof(int *) * r);
	while (i < r)
	{
		if (start < end)
		{
			ar[i] = end;
			i++;
			end--;
		}
		else
		{
			ar[i] = end;
			i++;
			end++;
		}
	}
	return (ar);
}
