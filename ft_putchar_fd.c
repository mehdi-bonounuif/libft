#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main()
{
	int fd = open("putchar.txt", O_RDWR | O_CREAT, 777);
	ft_putchar_fd('m', fd);
}
*/
