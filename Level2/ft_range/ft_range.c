/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:28:33 by gpallare          #+#    #+#             */
/*   Updated: 2023/11/13 12:47:03 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	i;
	int	size;

	size = abs((end - start)) + 1;
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			range[i] = start;
			start += 1;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			range[i] = start;
			start -= 1;
			i++;
		}
	}
	return (range);
}
