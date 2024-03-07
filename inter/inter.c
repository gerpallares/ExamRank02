/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:38:44 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/17 09:49:17 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		k;
	int		j;
	char	*str1;
	char	*str2;

	if (ac == 3)
	{
		str1 = av[1];
		str2 = av[2];
		while (str1[i] != '\0')
		{
			k = 0;
			while (str2[k] != '\0')
			{
				if (str1[i] == str2[k])
				{
					j = 0;
					while (str1[j] != str1[i])
						j++;
					if (j == i)
					{
						j = 0;
						while (str2[j] != str2[k])
							j++;
						if (j == k)
							write(1, &str1[i], 1);
					}
				}
				k++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
