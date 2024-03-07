/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:18:16 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/06 11:34:25 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	bo(char c)
{
	write(1, &c, 1);
}

void	camel_to_snake(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			bo('_');
			bo(str[i] + 32);
		}
		else
			bo(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
		if (ac == 2)
			camel_to_snake(av[1]);
		bo('\n');
		return (0);

}
