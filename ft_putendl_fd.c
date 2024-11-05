#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	l;

	l = ft_strlen(s);
	write(fd, s, l);
	write(fd, "\0", 1);
}

/*int	main()
{
	char string11[] = "from putendl";
	int fd2 = open("putendl.txt", O_RDWR | O_CREAT, 777);
	ft_putendl_fd(string11, fd2);
}*/
