/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:59:41 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/05 21:17:21 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
        size_t  i;
        char    *result;

        i = 0;
        result = NULL;
        while (s[i])
        {
                if (s[i] == (char)c)
                        result = (char *)s + i;
                i++;
        }
        if (c == '\0')
                return ((char *)s + i);
        return (result);
}
