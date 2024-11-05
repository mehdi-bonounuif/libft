/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:41:34 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/04 18:41:36 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalpha(int ch)
{
        return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}