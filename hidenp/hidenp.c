/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:08:50 by gpallare          #+#    #+#             */
/*   Updated: 2024/02/19 13:12:01 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i =0 ;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			j++;	
	}
	if (s1[i] == '\0')
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	else
		write(1, "\n", 1);
}
