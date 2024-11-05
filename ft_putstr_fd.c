#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	l;

	if (!s)
		return ;
	l = ft_strlen(s);
	write(fd, s, l);
}

/*int	main()
{
	char string10[] = "from putstr";
	int fd1 = open("putstr.txt", O_RDWR | O_CREAT, 777);
	ft_putstr_fd(string10, fd1);
}*/
