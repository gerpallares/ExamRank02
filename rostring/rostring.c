/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:46:32 by gpallare          #+#    #+#             */
/*   Updated: 2024/02/21 10:04:16 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	print_word(char c)
{
	write(1, &c, 1);
}

int	check_space(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

void	print_str(char *str, int i)
{
	while (str[i] && !check_space(str[i]))
	{
		print_word(str[i]);
		i++;
	}
}

void	rostring(char *str)
{
	int	i;
	int	begin_space = 0;

	while (str[begin_space] != '\0' && check_space(str[begin_space]))
		 begin_space++;
	i = begin_space;
	while (str[i] != '\0' && !check_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && !check_space(str[i]) && check_space(str[i - 1]))
		{
			while (str[i] != '\0' && !check_space(str[i]))
			{
				print_word(str[i]);
				i++;
			}
			print_word(' ');
		}
		i++;
	}
	print_str(str, begin_space);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	print_word('\n');
	return (0);
}
