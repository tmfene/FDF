/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:15:50 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/05 11:18:13 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	t;
	char	*msize;

	t = 0;
	msize = (char*)malloc(sizeof(*msize) * (size + 1));
	if (!msize)
		return (0);
	while (t < size)
	{
		msize[t] = '\0';
		t++;
	}
	msize[t] = '\0';
	return (msize);
}
