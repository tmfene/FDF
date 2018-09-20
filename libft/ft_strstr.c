/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:13:41 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/13 09:49:28 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		count;
	char	*hay;

	hay = (char*)haystack;
	if (*needle == '\0')
		return (hay);
	while (*hay != '\0')
	{
		count = 0;
		while (needle[count] == hay[count] && needle[count] != '\0')
			count++;
		if (needle[count] == '\0')
			return (hay);
		hay++;
	}
	return (NULL);
}
