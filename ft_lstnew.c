#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
void	print_list(t_list *head)
{
	t_list *temporary;
	temporary = head;
	while (temporary != NULL)
	{
		printf("%s ", (char *)temporary->content);
		temporary = temporary->next;
	}
	printf("\n");
}

int	main(void)
{
	char *conten = "head";
	t_list *head = ft_lstnew(conten);
	t_list *n1, *n2, *n3;

	n1 = ft_lstnew("node one ");
	n2 = ft_lstnew("node two");
	n3 = ft_lstnew("node three");
	head = n3;
	n3->next = n1;
	n1->next = n2;
	n2->next = NULL;

	print_list(head);

	free(n1);
  	free(n2);
    	free(n3);
}*/

//void	print_list(t_list *head)
//{
//	t_list *temporary;
//	temporary = head;
//	while (temporary != NULL)
//	{
//		printf("%s ", (char *)temporary->content);
//		temporary = temporary->next;
//	}
//	printf("\n");
//}
//
//int	main(void)
//{
//	char *conten = "head";
//	t_list *head = ft_lstnew(conten);
//	t_list *n1, *n2, *n3;
//
//	n1 = ft_lstnew("node one ");
//	n2 = ft_lstnew("node two");
//	n3 = ft_lstnew("node three");
//	head = n3;
//	n3->next = n1;
//	n1->next = n2;
//	n2->next = NULL;
//
//	print_list(head);
//
//	free(n1);
//  	free(n2);
//    	free(n3);
//}
