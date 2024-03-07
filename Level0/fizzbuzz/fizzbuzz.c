/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:36:15 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/04 09:40:57 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	i = 1;
	int	k;
	int	j;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i > 10)
		{
			k = i / 10 + '0';
			j = i % 10 + '0';
			write(1, &k, 1);
			write(1, &j, 1);
		}
		else
		{
			k = i + '0';
			write(1, &k, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
