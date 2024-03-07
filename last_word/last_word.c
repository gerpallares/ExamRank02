/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:51:15 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/06 11:56:08 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	bo(char c)
{
	write(1, &c, 1);
}

int	check_space(char c)
{
	if (c != ' ' && c != '\t' && c != '\0')
		return (1);
	return (0);
}

void	last_word(char *str)
{
	int	i = 0;
	int start = 0;

	while (str[i])
	{
		if ((i == 0 && check_space(str[i])) || (check_space(str[i] && !check_space(str[i - 1]))))
			start = i;
		i++;
	}
	while (str[start] && check_space(str[start]))
		bo(str[start++]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	bo('\n');
}
