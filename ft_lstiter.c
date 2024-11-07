#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}

}
/*
void	f(void *content)
{
	unsigned char *data = (unsigned char *)content;
	*data = 'M';
}

int main(void)
{
    unsigned char content1 = 'A';
    unsigned char content2 = 'B';
    unsigned char content3 = 'C';

    t_list *nd1 = ft_lstnew(&content1);
    t_list *nd2 = ft_lstnew(&content2);
    t_list *nd3 = ft_lstnew(&content3);

    nd1->next = nd2;
    nd2->next = nd3;

    ft_lstiter(nd1, f);

    t_list *temp = nd1;
    while (temp != NULL)
    {
        printf("Content: %c\n", *(unsigned char *)temp->content);
        temp = temp->next;
    }

    free(nd1);
    free(nd2);
    free(nd3);
}*/
