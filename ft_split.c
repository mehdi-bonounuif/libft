/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:21:21 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/04 18:49:26 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// COUNT LEN OF WORD TO SEP
int	wordlen(char const *str, char c)
{
	int	i;
	int	timer2;

	i = 0;
	timer2 = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		timer2++;
		i++;
	}
	return (timer2);
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
		if (str[i] != c && str[i] != '\0')
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
	if (!strings)
		return (0);
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			strings[i] = copywords(s, c);
			i++;
		}
		while (*s != '\0' && *s != c)	
			s++;	
	}
	strings[i] = 0;
	return (strings);
}
