/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:15:19 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/06 18:51:24 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);
{
	t_list *last;
	if (!lst)
		return NULL;

	last = lst;
	while (last != NULL)
		last = last->next;
}

