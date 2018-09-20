/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:03:55 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/06 18:06:09 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (i < (int)n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
		{
			dst1[i] = src1[i];
			i++;
			return ((void *)dst1 + i);
		}
		i++;
	}
	return (NULL);
}
