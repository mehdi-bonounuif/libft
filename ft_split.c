/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:21:21 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/05 22:12:30 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// IS SPACE

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

// COUNT LEN OF WORD TO SEP
int	wordlen(char const *str, char c)
{
	int	i;
	int	timer;

	i = 0;
	timer = 0;
	while (str[i] == c || is_space(str[i]))
		i++;
	while (str[i] != c && str[i] != '\0' && !is_space(str[i]))
	{
		timer++;
		i++;
	}
	return (timer);
}
// COUNT WORDS
int	wordcount(char const *str, char c)
{
	int	i;
	int	timer;

	i = 0;
	timer = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			timer++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (timer);
}
// COPY WORD
char	*copywords(char *str, char c)
{
	int	i;
	char	*word;
	int	len;

        len = wordlen(str, c);
	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
// SPLIT FUNCTION
char	**ft_split(char *s, char c)
{
	int	i;
	char	**strings;
	int	count;

	i = 0;
        count = wordcount(s, c);
	strings = malloc(sizeof(char *) * count + 1);
	if (!s || !strings)
		return (0);
	while (*s)
	{
		while (*s != '\0' && (*s == c || is_space(*s)))
			s++;
		if (*s != '\0')
		{
			strings[i] = copywords(s, c);
			i++;
		}
		while (*s != '\0' && *s != c && !is_space(*s))
			s++;	
	}
	strings[i] = 0;
	return (strings);
}
