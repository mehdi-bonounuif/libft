/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:55:05 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/08 16:57:17 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	totlen;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	totlen = s1_len + s2_len;
	if (!s1 && !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * totlen + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	str[totlen] = '\0';
	return (str);
}
