/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:53:08 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/04 10:04:06 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	pgcd(int a, int b)
{
	int	i = 0;

	if (a > b)
		i = b;
	else
		i = a;
	while (i)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%i", i);
			return (i);
		}	
		i--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	n1;
	int	n2;

	if (ac == 3)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[2]);
		pgcd(n1, n2);
	}
	printf("\n");
}
