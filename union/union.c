/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:33:49 by gpallare          #+#    #+#             */
/*   Updated: 2024/02/19 12:40:50 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write(char c)
{
	write(1, &c, 1);
}

void	print(char *str)
{
	int	i = 0;

	while (str[i])
		write(str[i++]);
}

int	check(char *str, char c)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int	j;
	int	k;
	char	res[255];

	i = 0;
	k = 0;
	j = 0;
	res[0] = '\0';

	while (str1[i])
		i++;
	while (str2[j])
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	j = 0;
	while (str1[j])
	{
		if (check(res, str1[j]) == 0)
		{
			res[k] = str1[j];
			k++;
			res[k] = '\0';
		}
		j++;
	}
	print(res);
}

int	main(int ac char **av)
{
	char	str[256];

	str[0] = '\0';
	if (ac == 3)
		ft_union(av[1], av[2]);
	write('\n');
}
	
