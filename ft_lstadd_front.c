#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
void	print_list2(t_list *head)
{
	t_list *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
=======
>>>>>>> 095b5ec272cf16dd9b45b1996b81482a263d94bd
}

int main()
{
	char *conten = "hello";
	char *conten2 = "world";
	t_list *head = ft_lstnew(conten2);
	t_list *mem1 = ft_lstnew(conten);
	ft_lstadd_front(&head, mem1);

	print_list2(head);

	free(head->next);
	free(head);
}*/
