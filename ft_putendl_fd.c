/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:28 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/08 16:50:12 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	l;

	l = ft_strlen(s);
	write(fd, s, l);
	write(fd, "\n", 1);
}

/*int	main()
{
	char string11[] = "from putendl";
	int fd2 = open("putendl.txt", O_RDWR | O_CREAT, 777);
	ft_putendl_fd(string11, fd2);
}*/
