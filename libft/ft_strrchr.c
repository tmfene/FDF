/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:51:25 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/06 14:50:26 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tstr;

	tstr = (char *)s + ft_strlen(s);
	while (*tstr != c)
	{
		if (tstr == s)
		{
			return (NULL);
		}
		tstr--;
	}
	return (tstr);
}
