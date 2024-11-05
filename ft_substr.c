/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:00:47 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/04 19:00:49 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	exact_len;

	i = 0;
	// Chek if string is empty
	if (!s)
		return (NULL);
	// Chek if start greater than len of string
	if (start >= ft_strlen(s))
		return ((char *) ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) <= start + len)
		exact_len = ft_strlen(s) - start;
	else
		exact_len = len;
	substr = malloc(sizeof(char) * exact_len + 1);
	
	if (!substr)
		return (NULL);
	while (s[start] && i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}











