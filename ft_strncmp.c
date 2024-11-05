/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:57:40 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/05 21:42:20 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t  i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
        if (n == 0)
                return (0);
        i = 0;
        while (str1[i] == str2[i] && str1[i] != '\0')
        {
                if (i < (n - 1))
                        i++;
                else
                        return (0);
        }
	return (str1[i] - str2[i]);
}

