/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:13:00 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/17 12:32:00 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i = i * 10;
		i = i + *str - '0';
		++str;
	}
	return (i);
}

void	print_hex(int n)
{
	char	hex_nums[] = "0123456789abcdef";

	if (n > 16)
		print_hex(n / 16);
	write(1, &hex_nums[n % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}
