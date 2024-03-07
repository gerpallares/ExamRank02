/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:56:59 by gpallare          #+#    #+#             */
/*   Updated: 2023/12/14 13:06:48 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	char *tmp;
	char *rev;
	int	i;

	if (ac == 2)
	{
		tmp = av[1];
		i = ft_strlen(tmp);
		rev = NULL;
		i--;
		while (tmp[i])
		{
			if (tmp[i - 1] == ' ')
			{
				rev = &tmp[i];
				while (*rev && *rev != ' ')
				{
					ft_putchar(*rev);
					rev++;
				}
				ft_putchar(' ');
			}
			else if (i == 0)
			{
				rev = &tmp[i];
				while (*rev && *rev != ' ')
				{
					ft_putchar(*rev);
					rev++;
				}
			}
			i--;
		}
	}
	ft_putchar('\n');
}
