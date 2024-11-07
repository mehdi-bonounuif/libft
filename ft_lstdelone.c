/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:27:20 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/07 16:11:22 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;

	del(lst->content);

	free(lst);
}
void	del(void* content)
{
	free(content);
}

int main()
{
    // Creating a simple linked list with one node
    t_list *node = malloc(sizeof(t_list));
    if (!node)
    {
        perror("malloc failed");
        return 1;
    }

    // Allocating and assigning content to the node
    node->content = malloc(sizeof(int));
    if (!(node->content))
    {
        perror("malloc failed");
        free(node);
        return 1;
    }
    *(int*)(node->content) = 42; // Assigning a value to the node's content
    node->next = NULL; // Since this is a single node, the next is NULL

    printf("Node content before deletion: %d\n", *(int*)(node->content));

    // Call ft_lstdelone to delete the node
    ft_lstdelone(node, del);

    // After deletion, ensure memory was freed
    printf("Node deleted successfully\n");

    return 0;
}
