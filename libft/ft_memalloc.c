/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:09:06 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/05 10:23:42 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmem;

	tmem = (char *)(malloc(size));
	if (!tmem)
		return (NULL);
	else
	{
		ft_bzero(tmem, size);
		return (tmem);
	}
}
