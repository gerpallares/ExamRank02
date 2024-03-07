/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:43:08 by gpallare          #+#    #+#             */
/*   Updated: 2024/03/06 09:46:58 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
	struct s_list	*node;
	void		*data;
}	t_list;

int	ft_list_size(t_list *begin_list)
{
	int	i = 0;
	t_list	*tmp = begin_list;
	
	while (tmp)
	{
		tmp = tmp->node;
		i++;
	}
	return (i);
}
