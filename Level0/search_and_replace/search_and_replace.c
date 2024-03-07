/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:14:33 by gpallare          #+#    #+#             */
/*   Updated: 2023/11/14 12:22:10 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;

	if (argc == 4)
	{
		if (((argv[2][0] >= 'a' && argv[2][0] <= 'z') || (argv[2][0] >= 'A' && argv[2][0] <= 'Z')) && argv[2][1] == '\0')
			if(((argv[3][0] >= 'a' && argv[3][0] <= 'z') || (argv[3][0] >= 'A' && argv[3][0] <= 'Z')) && argv[3][1] == '\0')
			{
				while (argv[1][i] != '\0')
				{
					if (argv[1][i] == argv[2][0])
						argv[1][i] = argv[3][0];
					write(1, &argv[1][i], 1);
					i++;
				}
			}
	}
	write(1, "\n", 1);
	return (0);
}
