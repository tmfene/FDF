/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:00:51 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/03 15:22:45 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmdst;
	unsigned char *tmsrc;

	tmdst = (unsigned char *)dst;
	tmsrc = (unsigned char *)src;
	while (n > 0)
	{
		*tmdst = *tmsrc;
		tmdst++;
		tmsrc++;
		n--;
	}
	return (dst);
}
