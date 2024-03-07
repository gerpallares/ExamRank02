/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:26:13 by gpallare          #+#    #+#             */
/*   Updated: 2024/02/22 10:38:43 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ok(char c)
{
	if (c == '\t' || c == ' ')
		return (0);
	return (1);
}

void	first_word(char *str)
{
	int	i = 0;

	while (!ok(str[i]))
		i++;
	while (ok(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
