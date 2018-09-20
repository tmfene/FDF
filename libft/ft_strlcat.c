/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:52:40 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/14 10:09:45 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = 0;
	b = 0;
	c = 0;
	while (dst[a] != '\0')
		a++;
	while (src[b] != '\0' && (b + a + 1) < dstsize)
	{
		dst[a + b] = src[b];
		b++;
	}
	dst[a + b] = '\0';
	while (src[c] != '\0')
		c++;
	if ((c + a) < dstsize)
		return (c + a);
	else if (dstsize <= a)
		return (dstsize + c);
	else
		return (a + c);
}
