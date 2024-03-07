/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:38:36 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/06 11:42:04 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int n)
{
	int i = 1;

	if (n == 1)
	{
		printf("1");
		return ;
	}
	while (i++ <= n)
	{
		if (i == n)
			printf("%d", n);
		else
		{
			if (n % i == 0)
			{
				printf("%i*", i);
				n /= i;
				i = 1;
			}
		}
	}
	return ;
}

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		i = atoi(av[1]);
		fprime(i);
	}
	printf("\n");
	return (0);
}
