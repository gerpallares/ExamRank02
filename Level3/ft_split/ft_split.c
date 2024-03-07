/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:04:26 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/06 12:08:57 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int	i = 0;
	int	i2 = 0;
	int	i3;
	char **tab;

	tab = malloc(sizeof(char *) * 1000);
	while (str[i])
	{
		if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		{
			i3 = 0;
			tab[i2] = malloc(sizeof(char *) * 1000);
			while (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
				
		}
		else
			i++;
	}
	tab[i2] = '\0';
	return (tab);
}
