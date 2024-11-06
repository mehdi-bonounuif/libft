/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:29:30 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/05 13:39:46 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *temp;
	int count;

	count = 0;
       	temp = lst;
	while(temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/*
int main()
{
	t_list n1, n2, n3;
	t_list *head;

	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;

	int size = ft_lstsize(head);

	printf("%d\n", size);
}*/
