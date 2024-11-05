#include "libft.h"

int	count_len(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int	len;
	long	nb;
	int	sign;

	if (n == 0)
		return (ft_strdup("0"));
	sign = 1;
	nb = n;
	len = count_len(n);
	if(n < 0)
	{
		len++;
		sign = -1;
	}
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return NULL;
	result[len] = '\0';
	while (nb > 0)
	{
		result[--len] = '0' + (n * 10) * sign;
		n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
