/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:01:30 by gpallare          #+#    #+#             */
/*   Updated: 2023/12/14 12:07:52 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	num;

	if (n >= 10)
		ft_putnbr(n / 10);
	num = (n % 10) + '0';
	write(1, &num, 1);
}

int	main(int ac, char **av)
{
	ft_putnbr(ac - 1);
	write(1, "\n", 1);

	return (0);
}
