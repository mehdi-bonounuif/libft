/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:47:58 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/04 18:48:02 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int value, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		*((unsigned char *)(s + i)) = (unsigned char)value;
		i++;
	}
	return (s);
}
