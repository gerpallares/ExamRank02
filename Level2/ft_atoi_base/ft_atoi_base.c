/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:26:54 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/12 12:34:29 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char c, char b)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'f')
		return (1);
	if (c >= 'A' && c <= 'F')
		c += 32;
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] && (str[i] == ' ' || str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && check(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		if (str[i] >= 'a' && str[i] <= 'f')
			res += (str[i] - 'a') + 10;
		if (str[i] >= 'A' && str[i] <= 'F')
			res += (str[i] - 'A') + 10;
		i++;
	}
	return (res * sign);
}
