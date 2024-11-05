/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:40:38 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/04 18:41:00 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	unsigned char *temp;

       	temp = (void *)malloc(nmemb * size);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
