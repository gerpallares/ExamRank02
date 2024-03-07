/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:58:55 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/17 12:09:34 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (atoi(av[1]) + (atoi(av[3]))));
		if (av[2][0] == '-')
			printf("%d", (atoi(av[1]) - (atoi(av[3]))));
		if (av[2][0] == '*')
			printf("%d", (atoi(av[1]) * (atoi(av[3]))));
		if (av[2][0] == '/')
			printf("%d", (atoi(av[1]) / (atoi(av[3]))));
		if (av[2][0] == '%')
			printf("%d", (atoi(av[1]) % (atoi(av[3]))));
	}
	printf("\n");
	return (0);
}
