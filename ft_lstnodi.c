/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnodi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:44:08 by ncrombez          #+#    #+#             */
/*   Updated: 2023/10/20 18:42:08 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnodi(t_list **list, int index)
{
	int		i;
	t_list	*t;

	i = 0;
	t = *list;
	while (i++ < index)
		t = t->next;
	return (t);
}