#include "libft.h"

int	count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*copy_word(char const *str, char c, int *len)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	*len = i;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_memmove(word, str, i);
	word[i] = '\0';
	return (word);
}

void	check_and_put(char **ars, char const *s, char c)
{
	int	i;
	int	str_i;
	int	len;

	i = 0;
	str_i = 0;
	while (s[str_i])
	{
		while (s[str_i] && s[str_i] == c)
			str_i++;
		if (s[str_i])
		{
			len = 0;
			ars[i] = copy_word(&s[str_i], c, &len);
			i++;
			str_i += len;
		}
	}
	ars[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ar;
	int		count;

	if (!s)
		return (NULL);
	count = count_word(s, c);
	ar = (char **)malloc((count + 1) * sizeof(char *));
	if (!ar)
		return (NULL);
	check_and_put(ar, s, c);
	return (ar);
}
